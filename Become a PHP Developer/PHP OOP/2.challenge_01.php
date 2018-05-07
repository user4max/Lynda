<?php

//2.challenge_01.php


Class Bicylce {

	var $brand;
	var $model;
	var $year;
	var $description;
	var $weight_kg = 0.0;
	var $lbs = 2.2046226218;

	function name(){
		return "Brand : " . $this->brand . "<br /> Model : " . $this->model . "<br /> Year : " . $this->year;
	}

	function weight_lbs(){
		return floatval($this->weight_kg) * $this->lbs . " lbs";
	}

	function set_weight_lbs() {
		return $this->weight_lbs() / $this->lbs . " kg (if we transform weight in kg)";
	}

	function setval_weight_lbs($value) {
		$this->weight_kg = floatval($value) / $this->lbs . " kg (if we transform weight in kg)";
	}

}

$bicycle1 = new Bicylce;
$bicycle1->brand = "Zaria";
$bicycle1->model = "k220";
$bicycle1->year = "2000";
$bicycle1->weight_kg = 13.2;

echo $bicycle1->name() . "<br />";
echo "Weight in lbs - " .$bicycle1->weight_lbs() . "<br />";
echo "Weight in kg - " .$bicycle1->weight_kg . "<br />";
//Set value
echo "If we set value 2 : <br />";
$bicycle1->setval_weight_lbs(2);
echo "Weight in lbs - " .$bicycle1->weight_lbs() . "<br />";
echo "Weight in kg - " .$bicycle1->weight_kg . "<br />";

echo "<br />";

$bicycle2 = new Bicylce;
$bicycle2->brand = "Aist";
$bicycle2->model = "P90";
$bicycle2->year = "1999";
$bicycle2->weight_kg = 10;

echo $bicycle2->name() . "<br />";
echo "Weight in lbs - " .$bicycle2->weight_lbs() . "<br />";
echo "Weight in kg - " .$bicycle2->weight_kg . "<br />";
//Set value
echo "If we set value 4 : <br />";
$bicycle2->setval_weight_lbs(4);
echo "Weight in lbs - " .$bicycle2->weight_lbs() . "<br />";
echo "Weight in kg - " .$bicycle2->weight_kg . "<br />";
?>