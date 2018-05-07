<?php

//class inheritance && define a subclass

class User {
	var $first_name;
	var $last_name;
	var $username;

	function full_name() {
		return $this->first_name . " " . $this->last_name;
	}
}


class Customer extends User {
	
}

$u = new User;
$u->first_name = "Jerry";
$u->last_name = "Serc";
$u->username = "jeroko";

$v = new Customer;
$v->first_name = "Max";
$v->last_name = "Moon";
$v->username = "maxmax";

echo $u->full_name() . "<br />";
echo $v->full_name() . "<br />";

echo get_parent_class($u) . "<br />";
echo get_parent_class($v) . "<br />";

if(is_subclass_of($v, 'User')){
	echo "Instance is a subclass of User. <br />";
}

$parents = class_parents($v);
echo implode(', ', $parents) . '<br />';

?>