<?php
include 'connect.php';
if(isset($_POST['submit'])){
    $email = $_POST['email'];
    $phone = $_POST['phone'];

    $sql = "SELECT (email,phone) VALUE ($email,$phone) ";
    if($conn->connect_error){
        die("failed to select student".$conn->connect_error);
    }else{
        echo "student selected successffully";
    }
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
    <input type="email" name="email" id="" placeholder="enter email" class="input"><br><br><br>
    <input type="tel" name="phone" id="" placeholder="enter phone number" class="input"><br><br><br>
    
    <button type="submit" name="submit">select student</button><br><br>
    <p>already registered<a href="#">logi</a></p>
    </form>
</body>
</html>