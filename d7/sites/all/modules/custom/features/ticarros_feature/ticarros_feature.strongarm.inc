<?php
/**
 * @file
 * ticarros_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ticarros_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_carro';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_carro';
  $strongarm->value = '[node:field_model] - [node:field_anno] - [node:field_price]';
  $export['auto_entitylabel_pattern_node_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_carro';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_administration_mode';
  $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'recaptcha/reCAPTCHA';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge_on_nonlisted_forms';
  $strongarm->value = 0;
  $export['captcha_default_challenge_on_nonlisted_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_en';
  $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_es';
  $strongarm->value = 'Eres un spam bot?';
  $export['captcha_description_es'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_enable_stats';
  $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '1';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_carro';
  $strongarm->value = 0;
  $export['comment_anonymous_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_make';
  $strongarm->value = 0;
  $export['comment_anonymous_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_model';
  $strongarm->value = 0;
  $export['comment_anonymous_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_carro';
  $strongarm->value = '1';
  $export['comment_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_carro';
  $strongarm->value = 1;
  $export['comment_default_mode_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_make';
  $strongarm->value = 0;
  $export['comment_default_mode_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_model';
  $strongarm->value = 1;
  $export['comment_default_mode_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_carro';
  $strongarm->value = '50';
  $export['comment_default_per_page_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_make';
  $strongarm->value = '50';
  $export['comment_default_per_page_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_model';
  $strongarm->value = '50';
  $export['comment_default_per_page_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_carro';
  $strongarm->value = 1;
  $export['comment_form_location_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_make';
  $strongarm->value = 1;
  $export['comment_form_location_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_model';
  $strongarm->value = 1;
  $export['comment_form_location_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_make';
  $strongarm->value = '1';
  $export['comment_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_model';
  $strongarm->value = '1';
  $export['comment_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_carro';
  $strongarm->value = '1';
  $export['comment_preview_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_make';
  $strongarm->value = '1';
  $export['comment_preview_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_model';
  $strongarm->value = '1';
  $export['comment_preview_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_carro';
  $strongarm->value = 1;
  $export['comment_subject_field_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_make';
  $strongarm->value = 1;
  $export['comment_subject_field_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_model';
  $strongarm->value = 1;
  $export['comment_subject_field_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_make';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_model';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_make';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_model';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_make';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_model';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__carro';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '19',
        ),
        'path' => array(
          'weight' => '20',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__model';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_disabled';
  $strongarm->value = 0;
  $export['l10n_update_check_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_frequency';
  $strongarm->value = '7';
  $export['l10n_update_check_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_check_mode';
  $strongarm->value = '3';
  $export['l10n_update_check_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_download_store';
  $strongarm->value = 'sites/all/translations';
  $export['l10n_update_download_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_import_mode';
  $strongarm->value = '1';
  $export['l10n_update_import_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1485061793;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_translation_status';
  $strongarm->value = array(
    'admin_menu' => array(
      'es' => (object) array(
        'name' => 'admin_menu',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-rc5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'admin_menu',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054471,
        'last_checked' => 1485054471,
        'files' => array(
          'remote' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'es',
            'version' => '7.x-3.0-rc5',
            'type' => 'remote',
            'filename' => 'admin_menu-7.x-3.0-rc5.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/admin_menu/admin_menu-7.x-3.0-rc5.es.po',
            'timestamp' => 1480449251,
          ),
          'local' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'es',
            'version' => '7.x-3.0-rc5',
            'type' => 'local',
            'filename' => 'admin_menu-7.x-3.0-rc5.es.po',
            'uri' => 'translations://admin_menu-7.x-3.0-rc5.es.po',
            'timestamp' => 1485054471,
            'directory' => 'translations://',
            'last_checked' => 1485054471,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'auto_entitylabel' => array(
      'es' => (object) array(
        'name' => 'auto_entitylabel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'auto_entitylabel',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485055814,
        'last_checked' => 1485055814,
        'files' => array(
          'remote' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'auto_entitylabel-7.x-1.3.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/auto_entitylabel/auto_entitylabel-7.x-1.3.es.po',
            'timestamp' => 1434680069,
          ),
          'local' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'auto_entitylabel-7.x-1.3.es.po',
            'uri' => 'translations://auto_entitylabel-7.x-1.3.es.po',
            'timestamp' => 1485055814,
            'directory' => 'translations://',
            'last_checked' => 1485055814,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'captcha' => array(
      'es' => (object) array(
        'name' => 'captcha',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'captcha',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054473,
        'last_checked' => 1485054472,
        'files' => array(
          'remote' => (object) array(
            'project' => 'captcha',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'captcha-7.x-1.3.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/captcha/captcha-7.x-1.3.es.po',
            'timestamp' => 1466622437,
          ),
          'local' => (object) array(
            'project' => 'captcha',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'captcha-7.x-1.3.es.po',
            'uri' => 'translations://captcha-7.x-1.3.es.po',
            'timestamp' => 1485054473,
            'directory' => 'translations://',
            'last_checked' => 1485054472,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ctools' => array(
      'es' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.12',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054475,
        'last_checked' => 1485054493,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'es',
            'version' => '7.x-1.12',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.12.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.12.es.po',
            'timestamp' => 1480453989,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'es',
            'version' => '7.x-1.12',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.12.es.po',
            'uri' => 'translations://ctools-7.x-1.12.es.po',
            'timestamp' => 1485054475,
            'directory' => 'translations://',
            'last_checked' => 1485054493,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'devel' => array(
      'es' => (object) array(
        'name' => 'devel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'devel',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054495,
        'last_checked' => 1485054497,
        'files' => array(
          'remote' => (object) array(
            'project' => 'devel',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'devel-7.x-1.5.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/devel/devel-7.x-1.5.es.po',
            'timestamp' => 1480599920,
          ),
          'local' => (object) array(
            'project' => 'devel',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'devel-7.x-1.5.es.po',
            'uri' => 'translations://devel-7.x-1.5.es.po',
            'timestamp' => 1485054495,
            'directory' => 'translations://',
            'last_checked' => 1485054497,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'diff' => array(
      'es' => (object) array(
        'name' => 'diff',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'diff',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054500,
        'last_checked' => 1485054499,
        'files' => array(
          'remote' => (object) array(
            'project' => 'diff',
            'langcode' => 'es',
            'version' => '7.x-3.3',
            'type' => 'remote',
            'filename' => 'diff-7.x-3.3.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/diff/diff-7.x-3.3.es.po',
            'timestamp' => 1482212634,
          ),
          'local' => (object) array(
            'project' => 'diff',
            'langcode' => 'es',
            'version' => '7.x-3.3',
            'type' => 'local',
            'filename' => 'diff-7.x-3.3.es.po',
            'uri' => 'translations://diff-7.x-3.3.es.po',
            'timestamp' => 1485054500,
            'directory' => 'translations://',
            'last_checked' => 1485054499,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'drupal' => array(
      'es' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.53',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054507,
        'last_checked' => 1485054513,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'es',
            'version' => '7.53',
            'type' => 'remote',
            'filename' => 'drupal-7.53.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/drupal/drupal-7.53.es.po',
            'timestamp' => 1481742796,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'es',
            'version' => '7.53',
            'type' => 'local',
            'filename' => 'drupal-7.53.es.po',
            'uri' => 'translations://drupal-7.53.es.po',
            'timestamp' => 1485054507,
            'directory' => 'translations://',
            'last_checked' => 1485054513,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ds' => array(
      'es' => (object) array(
        'name' => 'ds',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.14',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ds',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485061788,
        'last_checked' => 1485061791,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ds',
            'langcode' => 'es',
            'version' => '7.x-2.14',
            'type' => 'remote',
            'filename' => 'ds-7.x-2.14.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/ds/ds-7.x-2.14.es.po',
            'timestamp' => 1475369116,
          ),
          'local' => (object) array(
            'project' => 'ds',
            'langcode' => 'es',
            'version' => '7.x-2.14',
            'type' => 'local',
            'filename' => 'ds-7.x-2.14.es.po',
            'uri' => 'translations://ds-7.x-2.14.es.po',
            'timestamp' => 1485061788,
            'directory' => 'translations://',
            'last_checked' => 1485061791,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'email' => array(
      'es' => (object) array(
        'name' => 'email',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'email',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054516,
        'last_checked' => 1485054515,
        'files' => array(
          'remote' => (object) array(
            'project' => 'email',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'email-7.x-1.3.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/email/email-7.x-1.3.es.po',
            'timestamp' => 1466619587,
          ),
          'local' => (object) array(
            'project' => 'email',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'email-7.x-1.3.es.po',
            'uri' => 'translations://email-7.x-1.3.es.po',
            'timestamp' => 1485054516,
            'directory' => 'translations://',
            'last_checked' => 1485054515,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entity' => array(
      'es' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485055812,
        'last_checked' => 1485055811,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.es.po',
            'timestamp' => 1475342966,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.es.po',
            'uri' => 'translations://entity-7.x-1.6.es.po',
            'timestamp' => 1485055812,
            'directory' => 'translations://',
            'last_checked' => 1485055811,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'features' => array(
      'es' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054516,
        'last_checked' => 1485054515,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'es',
            'version' => '7.x-2.10',
            'type' => 'remote',
            'filename' => 'features-7.x-2.10.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/features/features-7.x-2.10.es.po',
            'timestamp' => 1474714789,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'es',
            'version' => '7.x-2.10',
            'type' => 'local',
            'filename' => 'features-7.x-2.10.es.po',
            'uri' => 'translations://features-7.x-2.10.es.po',
            'timestamp' => 1485054516,
            'directory' => 'translations://',
            'last_checked' => 1485054515,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'features_extra' => array(
      'es' => (object) array(
        'name' => 'features_extra',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features_extra',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054518,
        'last_checked' => 1485054517,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features_extra',
            'langcode' => 'es',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'features_extra-7.x-1.0.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/features_extra/features_extra-7.x-1.0.es.po',
            'timestamp' => 1466564453,
          ),
          'local' => (object) array(
            'project' => 'features_extra',
            'langcode' => 'es',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'features_extra-7.x-1.0.es.po',
            'uri' => 'translations://features_extra-7.x-1.0.es.po',
            'timestamp' => 1485054518,
            'directory' => 'translations://',
            'last_checked' => 1485054517,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'i18n' => array(
      'es' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054518,
        'last_checked' => 1485054523,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'es',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.es.po',
            'timestamp' => 1475363656,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'es',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.es.po',
            'uri' => 'translations://i18n-7.x-1.13.es.po',
            'timestamp' => 1485054518,
            'directory' => 'translations://',
            'last_checked' => 1485054523,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'jquery_update' => array(
      'es' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054524,
        'last_checked' => 1485054523,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha3',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha3.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha3.es.po',
            'timestamp' => 1466624139,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha3',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha3.es.po',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha3.es_0.po',
            'timestamp' => 1485054524,
            'directory' => 'translations://',
            'last_checked' => 1485054523,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'l10n_update' => array(
      'es' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054429,
        'last_checked' => 1485054429,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.es.po',
            'timestamp' => 1466628679,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.es.po',
            'uri' => 'translations://l10n_update-7.x-2.0.es.po',
            'timestamp' => 1485054429,
            'directory' => 'translations://',
            'last_checked' => 1485054429,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'libraries' => array(
      'es' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054524,
        'last_checked' => 1485054523,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.es.po',
            'timestamp' => 1416679033,
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.es.po',
            'uri' => 'translations://libraries-7.x-2.2.es.po',
            'timestamp' => 1485054524,
            'directory' => 'translations://',
            'last_checked' => 1485054523,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'module_filter' => array(
      'es' => (object) array(
        'name' => 'module_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'module_filter',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054526,
        'last_checked' => 1485054525,
        'files' => array(
          'remote' => (object) array(
            'project' => 'module_filter',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'module_filter-7.x-2.0.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/module_filter/module_filter-7.x-2.0.es.po',
            'timestamp' => 1475356448,
          ),
          'local' => (object) array(
            'project' => 'module_filter',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'module_filter-7.x-2.0.es.po',
            'uri' => 'translations://module_filter-7.x-2.0.es.po',
            'timestamp' => 1485054526,
            'directory' => 'translations://',
            'last_checked' => 1485054525,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'pathauto' => array(
      'es' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054527,
        'last_checked' => 1485054527,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.3.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.3.es.po',
            'timestamp' => 1476213841,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.3.es.po',
            'uri' => 'translations://pathauto-7.x-1.3.es.po',
            'timestamp' => 1485054527,
            'directory' => 'translations://',
            'last_checked' => 1485054527,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'phone' => array(
      'es' => (object) array(
        'name' => 'phone',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'phone',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054530,
        'last_checked' => 1485054529,
        'files' => array(
          'remote' => (object) array(
            'project' => 'phone',
            'langcode' => 'es',
            'version' => '7.x-1.0-beta1',
            'type' => 'remote',
            'filename' => 'phone-7.x-1.0-beta1.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/phone/phone-7.x-1.0-beta1.es.po',
            'timestamp' => 1466640351,
          ),
          'local' => (object) array(
            'project' => 'phone',
            'langcode' => 'es',
            'version' => '7.x-1.0-beta1',
            'type' => 'local',
            'filename' => 'phone-7.x-1.0-beta1.es.po',
            'uri' => 'translations://phone-7.x-1.0-beta1.es.po',
            'timestamp' => 1485054530,
            'directory' => 'translations://',
            'last_checked' => 1485054529,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'recaptcha' => array(
      'es' => (object) array(
        'name' => 'recaptcha',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'recaptcha',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054530,
        'last_checked' => 1485054529,
        'files' => array(
          'remote' => (object) array(
            'project' => 'recaptcha',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'recaptcha-7.x-2.2.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/recaptcha/recaptcha-7.x-2.2.es.po',
            'timestamp' => 1480030111,
          ),
          'local' => (object) array(
            'project' => 'recaptcha',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'recaptcha-7.x-2.2.es.po',
            'uri' => 'translations://recaptcha-7.x-2.2.es.po',
            'timestamp' => 1485054530,
            'directory' => 'translations://',
            'last_checked' => 1485054529,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'references' => array(
      'es' => (object) array(
        'name' => 'references',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'references',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054531,
        'last_checked' => 1485054531,
        'files' => array(
          'remote' => (object) array(
            'project' => 'references',
            'langcode' => 'es',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'references-7.x-2.1.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/references/references-7.x-2.1.es.po',
            'timestamp' => 1466639881,
          ),
          'local' => (object) array(
            'project' => 'references',
            'langcode' => 'es',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'references-7.x-2.1.es.po',
            'uri' => 'translations://references-7.x-2.1.es_0.po',
            'timestamp' => 1485054531,
            'directory' => 'translations://',
            'last_checked' => 1485054531,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'strongarm' => array(
      'es' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054532,
        'last_checked' => 1485054531,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.es.po',
            'timestamp' => 1358528431,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.es.po',
            'uri' => 'translations://strongarm-7.x-2.0.es.po',
            'timestamp' => 1485054532,
            'directory' => 'translations://',
            'last_checked' => 1485054531,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'token' => array(
      'es' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054532,
        'last_checked' => 1485054531,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/token/token-7.x-1.6.es.po',
            'timestamp' => 1466645917,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.es.po',
            'uri' => 'translations://token-7.x-1.6.es.po',
            'timestamp' => 1485054532,
            'directory' => 'translations://',
            'last_checked' => 1485054531,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'variable' => array(
      'es' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054534,
        'last_checked' => 1485054533,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.es.po',
            'timestamp' => 1477690766,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.es.po',
            'uri' => 'translations://variable-7.x-2.5.es.po',
            'timestamp' => 1485054534,
            'directory' => 'translations://',
            'last_checked' => 1485054533,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views' => array(
      'es' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.14',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054536,
        'last_checked' => 1485054554,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'es',
            'version' => '7.x-3.14',
            'type' => 'remote',
            'filename' => 'views-7.x-3.14.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/views/views-7.x-3.14.es.po',
            'timestamp' => 1480459474,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'es',
            'version' => '7.x-3.14',
            'type' => 'local',
            'filename' => 'views-7.x-3.14.es.po',
            'uri' => 'translations://views-7.x-3.14.es.po',
            'timestamp' => 1485054536,
            'directory' => 'translations://',
            'last_checked' => 1485054554,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views_slideshow' => array(
      'es' => (object) array(
        'name' => 'views_slideshow',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_slideshow',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054557,
        'last_checked' => 1485054556,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_slideshow',
            'langcode' => 'es',
            'version' => '7.x-3.1',
            'type' => 'remote',
            'filename' => 'views_slideshow-7.x-3.1.es.po',
            'uri' => 'https://ftp.drupal.org/files/translations/7.x/views_slideshow/views_slideshow-7.x-3.x.es.po',
            'timestamp' => 1484858622,
          ),
          'local' => (object) array(
            'project' => 'views_slideshow',
            'langcode' => 'es',
            'version' => '7.x-3.1',
            'type' => 'local',
            'filename' => 'views_slideshow-7.x-3.1.es.po',
            'uri' => 'translations://views_slideshow-7.x-3.x.es.po',
            'timestamp' => 1485054557,
            'directory' => 'translations://',
            'last_checked' => 1485054556,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views_slideshow_slider' => array(
      'es' => (object) array(
        'name' => 'views_slideshow_slider',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_slideshow_slider',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => 1485054557,
        'last_checked' => 1485054556,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_slideshow_slider',
            'langcode' => 'es',
            'version' => '7.x-3.0',
            'type' => 'remote',
            'filename' => 'views_slideshow_slider-7.x-3.0.es.po',
            'uri' => 'https://ftp-origin.drupal.org/files/translations/7.x/views_slideshow_slider/views_slideshow_slider-7.x-3.0.es.po',
            'timestamp' => 1321291713,
          ),
          'local' => (object) array(
            'project' => 'views_slideshow_slider',
            'langcode' => 'es',
            'version' => '7.x-3.0',
            'type' => 'local',
            'filename' => 'views_slideshow_slider-7.x-3.0.es.po',
            'uri' => 'translations://views_slideshow_slider-7.x-3.0.es.po',
            'timestamp' => 1485054557,
            'directory' => 'translations://',
            'last_checked' => 1485054556,
            'language' => 'es',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
  );
  $export['l10n_update_translation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_carro';
  $strongarm->value = '0';
  $export['language_content_type_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_make';
  $strongarm->value = '0';
  $export['language_content_type_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_model';
  $strongarm->value = '0';
  $export['language_content_type_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 1;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => '0',
    'javascript' => 'VGpkDejt249h5XrTtpwwMKrh-OXbTBvGcOgHCvX59p4',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array();
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_carro';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_make';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_model';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_carro';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_make';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_model';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_carro';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_make';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_model';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_carro';
  $strongarm->value = '1';
  $export['node_preview_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_make';
  $strongarm->value = '1';
  $export['node_preview_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_model';
  $strongarm->value = '1';
  $export['node_preview_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_carro';
  $strongarm->value = 0;
  $export['node_submitted_carro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_make';
  $strongarm->value = 0;
  $export['node_submitted_make'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_model';
  $strongarm->value = 0;
  $export['node_submitted_model'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_carro_pattern';
  $strongarm->value = 'carro/[node:title]';
  $export['pathauto_node_carro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_make_pattern';
  $strongarm->value = 'marca/[node:title]';
  $export['pathauto_node_make_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_model_pattern';
  $strongarm->value = 'modelo/[node:title]';
  $export['pathauto_node_model_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_noscript';
  $strongarm->value = 0;
  $export['recaptcha_noscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_secret_key';
  $strongarm->value = '6LdJMBAUAAAAAIjhGGqN-38vPCFLK_7afz-gNR3k';
  $export['recaptcha_secret_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_site_key';
  $strongarm->value = '6LdJMBAUAAAAAM9dYPktsTTNdlSwnP3UYP0M67eE';
  $export['recaptcha_site_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_size';
  $strongarm->value = '';
  $export['recaptcha_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_tabindex';
  $strongarm->value = '0';
  $export['recaptcha_tabindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_theme';
  $strongarm->value = 'light';
  $export['recaptcha_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_type';
  $strongarm->value = 'image';
  $export['recaptcha_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'CR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'carros';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'justaman@gmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Ticarros.com';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bootstrap_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 1,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => 'img-rounded',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => 1,
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.5',
    'bootstrap_cdn_jsdelivr_theme' => 'lumen',
    'jquery_update_jquery_version' => '2.1',
  );
  $export['theme_bootstrap_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'ticarros';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_seven_settings';
  $strongarm->value = array(
    'default_logo' => 1,
    'logo_path' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
    'toggle_logo' => 1,
    'toggle_favicon' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'shortcut_module_link' => '1',
    'logo' => 'http://ticarros.com/themes/seven/logo.png',
    'favicon' => 'http://ticarros.com/misc/favicon.ico',
    'jquery_update_jquery_version' => 'default',
  );
  $export['theme_seven_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ticarros_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-advanced',
    'bootstrap_fluid_container' => 1,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => 'img-rounded',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => 1,
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer1' => '',
    'bootstrap_region_well-footer2' => '',
    'bootstrap_region_well-footer3' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.5',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'jquery_update_jquery_version' => '2.1',
  );
  $export['theme_ticarros_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  return $export;
}
