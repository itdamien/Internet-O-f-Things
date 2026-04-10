<?php
include 'connect.php';
if(isset($_POST['submit'])){
    $firstname = $_POST['firstname'];
    $surname = $_POST['surname'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    

    $sql = "INSERT INTO class(firstname,surname,email,phone,password)VALUES($firstname,$surname,$email,$phone)";
   if($conn->connect_error){
    die("failed to add student".$conn->connect_error);
   }echo "student added successully";
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>cars dashbord</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h2>add your car into database</h2>
    <form action="" method="post" class="sign">
         <input type="text" name="firstname" id="" placeholder="enter first name" class="input"><br><br><br>
    <input type="text" name="surname" id="" placeholder="enter last name" class="input"><br><br><br>
    <input type="email" name="email" id="" placeholder="enter email" class="input"><br><br><br>
    <input type="tel" name="phone" id="" placeholder="enter phone number" class="input"><br><br><br>
    
    <button type="submit" name="submit">add student</button><br><br>
    <p>already registered<a href="#">logi</a></p>
    </form>
</body>
</html>