<?php
if(isset($_POST['query']) && !empty($_POST['domain_url']) && !empty($_POST['target_urls']) ){
    $error = false;
    $userAgent = 'Googlebot/2.1 (http://www.googlebot.com/bot.html)';

    $target_input_urls = explode(PHP_EOL,$_POST['target_urls']);

    foreach($target_input_urls as $target_input_url){
        $target_input_url = trim($target_input_url);
        if(!empty ($target_input_url)){
            if ( $parts = parse_url($target_input_url) ) {
                if ( !isset($parts["scheme"]) ){
                    $target_input_url = "http://$target_input_url";
                }
            }

            $target_urls[] = array('target_url'=> trim($target_input_url));
        }
    }

    foreach($target_urls as $target_key => $target_url){
        if (filter_var($target_url['target_url'], FILTER_VALIDATE_URL)) {

            // curl $target_url
            $ch = curl_init();
            curl_setopt($ch, CURLOPT_USERAGENT, $userAgent);
            curl_setopt($ch, CURLOPT_URL,$target_url['target_url']);
            curl_setopt($ch, CURLOPT_FAILONERROR, true);
            // curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);
            curl_setopt($ch, CURLOPT_AUTOREFERER, true);
            curl_setopt($ch, CURLOPT_RETURNTRANSFER,true);
            curl_setopt($ch, CURLOPT_TIMEOUT, 10);
            $target_html= curl_exec($ch);

            if (!$target_html) {
                $target_urls[$target_key]['response'] = "<br />cURL error (".curl_errno($ch). "): ".curl_error($ch);
            } else {
                // parse the html into a DOMDocument
                $dom = new DOMDocument();
                @$dom->loadHTML($target_html);
                $xpath = new DOMXPath($dom);
                $items = $xpath->evaluate("/html/body//a");

                for ($i = 0; $i < $items->length; $i++) {
                    $item = $items->item($i);

                    $href = $item->getAttribute('href');
                    $rel = $item->getAttribute('rel');
                    $text = $item->nodeValue;
                    if( $href == $_POST['domain_url'] ) {
                        $target_urls[$target_key]['matches'][] = array ('href' => $href, 'text'=>$text, 'rel' => $rel);
                    }
                } //end loop

                if($error == true) {
                    $target_urls[$target_key]['response'] = "No Backlinks were found";
                }
            }
        } else {
            $target_urls[$target_key]['response'] = "Not a valid URL";

        }
    }
} else {
    $error=true;
}
?>

<html>
    <head></head>
    <body>
        <div id="content">
            <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
                <label>Your Domain URL &nbsp;</label><br/><input size="61" type="text" name="domain_url"
                     value="<?php print (isset($_POST['domain_url'])?$_POST['domain_url']:'http://www.');?>"/> <br/><br/>
                <label>Backlink URLs</label><br><textarea name="target_urls" rows="20" cols="60"><?php print (isset($_POST['target_urls'])?$_POST['target_urls']:'');?></textarea>
                <input type="hidden" name="secureurl" value="1"/>
                <input type="submit" name="query" value="Check Links" class="button"/>
            </form>


            <?php if (isset($_POST['query'])){ ?>
                <table border="1" cellpadding="10">
                    <tr>
                        <th>Target URL</th>
                        <th>Matches</th>
                    </tr>
                    <?php foreach ($target_urls as $target_url){?>
                        <tr>
                            <td><?php echo $target_url['target_url'];?></td>
                            <td>
                                <?php if(!empty ($target_url['matches']) ) {?>

                                    <table border="1" margin="10px">
                                        <tr>
                                            <th>href</th>
                                            <th>rel</th>
                                            <th>text</th>
                                        </tr><?php foreach ($target_url['matches'] as $match){?>
                                            <tr>
                                                <td><?php print $match['href'];?></td>
                                                <td><?php print $match['rel'];?></td>
                                                <td><?php print $match['text'];?></td>
                                            </tr>
                                        <?php } ?>
                                    </table>
                                <?php } else {
                                    echo $target_url['response'];
                                } ?>
                            </td>
                        </tr>
                    <?php } ?>
                </table>
            <?php } ?>

        </div>
    </body>
</html>

