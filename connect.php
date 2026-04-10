<?php
$host = "localhost";
$user = "root";
$pass = "";
$db = "cars";

$conn = new mysqli($host,$user,$pass,$db);
if($conn){
    echo "database connected successfully";
}else{
    echo "failed to connect";
}
?>