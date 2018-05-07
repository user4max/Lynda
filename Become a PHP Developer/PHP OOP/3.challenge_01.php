<?php


//challenge 2

class Character {
	var $name;
	var $role;
	var $faction = false;
	var $race = false;
	var $gender = false;

	function name_role() {
		return $this->name . " " . $this->role;
	}

}

class hero extends Character {
	var $class;
	var $faction = true;
	var $race = true;
	var $gender = true;
	var $pet = false;

	function charac_info() {
		return $this->name_role() . " " . $this->class . " " . $this->faction . " " . $this->race . " " . $this->gender;
	}
}

class pet extends hero {
}

class npc extends Character {
	var $faction = true;
	var $race = true;
	var $gender = true;

	function charac_info() {
		return $this->name_role() . " " . $this->faction . " " . $this->race . " " . $this->gender;
	}
}

class monster extends Character {
	var $difficulty;

	function charac_info() {
		return $this->name_role() . " " . $this->difficulty;
	}
}

function inspect_class($class_name) {
	$output = '';

	$output .= $class_name;
	$parent_class = get_parent_class($class_name);
	if ($parent_class != ''){
		$output .= " extends {$parent_class}";
	}
	$output .= "\n";

	$class_vars = get_class_vars($class_name);
	ksort($class_vars);
	$output .= " properties: \n";
	foreach ($class_vars as $k => $v) {
		$output .= "- {$k} : {$v}\n";
	}

	$class_methods = get_class_methods($class_name);
	sort($class_methods);
	$output .= "methods: \n";
	foreach ($class_methods as $k) {
		$output .= "- {$k}\n";
	}

	return $output;
}

$hero1 = new hero;
$hero1->name = "Maxim";
$hero1->role = " - Player";
$hero1->class = "Frost-Mage";
$hero1->faction = "Alliance";
$hero1->race = "human";
$hero1->gender = "man";
$hero1->pet = true;

$npc1 = new npc;
$npc1->name = "Teacher Jazy";
$npc1->role = " - Non-Player Character";
$npc1->faction = "Alliance";
$npc1->race = "human";
$npc1->gender = "girl";

$m1 = new monster;
$m1->name = "Zul Naz";
$m1->role = " - Attack enemies character";
$m1->difficulty = "Hard";

echo $hero1->charac_info();
if ($hero1->pet == true) echo " have a pet";
echo "<br />";
echo $npc1->charac_info() . "<br />";
echo $m1->charac_info() . "<br />";

echo $m1->charac_info() . "<br />";

echo '<br />';

$class_name = ['hero', 'pet', 'npc', 'monster', 'character'];
foreach ($class_name as $class_name) {
	echo nl2br(inspect_class($class_name));
	echo '<br />';
}

?>