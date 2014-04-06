<?php

/**
 * Admin form
 */
function listsplitter_admin_form($form_state) {
  $form = array();
  $form['listsplitter_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable jQuery listsplitter'),
    '#default_value' => variable_get('listsplitter_enabled', TRUE),
    '#description' => t('Use this option to toggle jQuery listsplitter on and off globally.'),
  );
  $form['listsplitter_class'] = array(
    '#type' => 'textarea',
    '#title' => t('CSS selectors to add listsplitter'),
    '#description' => t('Enter the CSS selectors of the <ul> apply listsplitter to.'),
    '#rows' => 3,
    '#cols' => 40,
    '#default_value' => variable_get('listsplitter_class', '.menu-level-3 ul.menu'),
  );
  
  
  // TODO validate Rules values
  // Script options fieldset1.
  $listsplitter_script_options1 = variable_get('listsplitter_script_options1', array());
  $form['listsplitter_script_options1'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#title' => t('Columns number (Rule 1)'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['listsplitter_script_options1']['colnum'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => empty($listsplitter_script_options1['colnum']) ? '1' : $listsplitter_script_options1['colnum'],
    '#title' => t('Columns number'),
    '#description' => t('Number of columns if number of list items are more than...'),
  );
    $form['listsplitter_script_options1']['listitems'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => empty($listsplitter_script_options1['listitems']) ? '1' : $listsplitter_script_options1['listitems'],
    '#title' => t('List items number greater than'),
    '#description' => t('Divide to columns if list items number greater than this value.'),
  );
  
  // Script options fieldset2.
  $listsplitter_script_options2 = variable_get('listsplitter_script_options2', array());
  $form['listsplitter_script_options2'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#title' => t('Columns number (Rule 2)'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['listsplitter_script_options2']['colnum'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => empty($listsplitter_script_options2['colnum']) ? '1' : $listsplitter_script_options2['colnum'],
    '#title' => t('Columns number'),
    '#description' => t('Number of columns if number of list items are more than...'),
  );
    $form['listsplitter_script_options2']['listitems'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => empty($listsplitter_script_options2['listitems']) ? '1' : $listsplitter_script_options2['listitems'],
    '#title' => t('List items number greater than'),
    '#description' => t('Divide to columns if list items number greater than this value.'),
  );
  
  
  return system_settings_form($form);
}