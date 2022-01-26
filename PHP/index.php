<?php
    $db = mysqli_connect("localhost", "root", "", "3b2");

    if(isset($_POST['osoba'])){
        $osoba = $_POST['osoba'];
        $ulica = $_POST['ulica'];
        $miasto = $_POST['miasto'];
        $kod = $_POST['kod'];
        $q4 = "INSERT INTO `adresy`(`id_`, `ulica`, `miasto`, `kod`) 
                VALUES ('$osoba','$ulica','$miasto','$kod')";
        mysqli_query($db,$q4);
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
<?php
    if(isset($_POST['imie'])){
        $imie = $_POST['imie'];
        $nazwisko = $_POST['nazwisko'];
        $q2 = "INSERT INTO `personalia`(`Imie`, `Nazwisko`) VALUES ('$imie','$nazwisko')";

        if(mysqli_query($db, $q2))
        echo 'Zapisano w bazie';
        else echo 'Ssij jaja Julek';

    }
?>
    
    <table border="1">
    <?php

    $q1 = "SELECT `personalia`.*, `adresy`.`ulica`, `adresy`.`miasto`, `adresy`.`kod`
    FROM `personalia` 
        LEFT JOIN `adresy` ON `adresy`.`id_` = `personalia`.`id`;";
    $r1 = mysqli_query($db, $q1);
    while ($row1 = mysqli_fetch_array($r1)){
        echo '<tr>';
            for($i = 0; $i < 6;$i++)
                echo '<td>'.$row1[$i].'</td>';
        echo '</tr>';
    }
    ?>

    </table>

<hr>
<form action="" method="post">
    Podaj imię<br>
    <input type="text" name="imie"><br>
    Podaj nazwisko<br>
    <input type="text" name="nazwisko"><br>
    <input type="submit" value="Wyslij">
</form>
<hr>
<form action="" method="post">
    <select name="osoba" id="">
        <?php
            $q3 = "SELECT * FROM `personalia`";
            $r3 = mysqli_query($db, $q3);
            while($row3 = mysqli_fetch_row($r3)){
                $q5= "SELECT `id` FROM `adresy` WHERE `id_` = '$row3[0]';";
                $r5 = mysqli_query($db, $q5);
                if(!mysqli_fetch_row($r5))
                    echo '<option value="'.$row3[0].'">'.$row3[1].' '.$row3[2].'</option>';
            }
        ?>
    </select>
    <input type="text" placeholder="Ulica" name="ulica" id="">
    <input type="text" placeholder="Miasto" name="miasto" id="">
    <input type="text" placeholder="Kod" name="kod" id="">
    <input type="submit" value="Zatwierdz">

</form>

</body>
</html>

<?php
    mysqli_close($db);

?>
