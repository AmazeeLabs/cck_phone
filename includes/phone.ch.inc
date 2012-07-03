<?php

/**
 * @file
 * CCK Field for Switzerland phone numbers.
 */

/**
 * Default Switzerland phone formatter.
 */
function ch_formatter_default($element) {
  $cc = cck_phone_countrycodes($element['country_codes']);
  $result = preg_match('/(\d{2})(\d{3})(\d{2})(\d{2})/', $element['number'], $matches);
  return  $cc['code'] . ' ' . $matches[1] . ' ' . $matches[2] . ' ' . $matches[3] . ' ' . $matches[4];
}
