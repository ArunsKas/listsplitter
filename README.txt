jQuery easyListSplitter
=======================

Description
-----------
This module provides a Drupal integration for an easyListSplitter jQuery plugin 
originally developed by Andrea Cima Serniotti.

The module will get your list, wrap it into a container div, generate as many 
lists as the number of columns you require and evenly split the list items into 
the different list elements. If the list items are not enough to evenly fill in
all the columns, the plugin will hide the columns in excess (this might happen 
only if you’re ordering your list items vertically as per default).

Requirements
------------
Drupal 7

This module depends on jQuery UI, but uses the bundled copy that comes with
Drupal core. It will add the necessary JS files to the page when needed.

Installation
------------
1. Copy the entire listsplitter directory the Drupal sites/all/modules directory.

2. Login as an administrator. Enable the module under "Modules".

3. Configure the module at "Administer" -> "Configuration" -> "User Interface"
   -> jQuery easyListSplitter.

