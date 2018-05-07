<?php

//class inheritance part.2

class User {
	var $first_name;
	var $last_name;
	var $username;
	var $is_admin = false;

	function full_name() {
		return $this->first_name . " " . $this->last_name;
	}
}


class Customer extends User {
	var $city;
	var $state;
	var $country;

	function location() {
		return $this->city . ", " . $this->state . ", " . $this->country;
	}
}

class AdminUser extends User {
	var $is_admin = true;

	function full_name() {
		return $this->first_name . " " . $this->last_name . "(ADMIN)";
	}
}

$u = new User;
$u->first_name = "Jerry";
$u->last_name = "Serc";
$u->username = "jeroko";

$v = new Customer;
$v->first_name = "Max";
$v->last_name = "Moon";
$v->username = "maxmax";
$v->city = "New Yorok";
$v->state = "New York";
$v->country = "United States";

echo $u->full_name() . "<br />";
echo $v->full_name() . "<br />";

echo $v->location() . "<br />";
//echo $u->location() . "<br />"; //no method error

echo get_parent_class($u) . "<br />";
echo get_parent_class($v) . "<br />";

if(is_subclass_of($v, 'User')){
	echo "Instance is a subclass of User. <br />";
}

$parents = class_parents($v);
echo implode(', ', $parents) . '<br />';

?>