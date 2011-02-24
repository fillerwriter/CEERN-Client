<?php

abstract class CeenProcess {
  abstract function process($source, &$destination = array());
}