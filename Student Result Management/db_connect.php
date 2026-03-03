<?php
$servername = "localhost";
$username = "root"; // Default username for XAMPP
$password = ""; // Default password for XAMPP
$dbname = "student_result_management"; // Replace with your database name

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Fetch data from a table (replace 'your_table_name' with your actual table name)
$sql = "SELECT * FROM your_table_name";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // Output data of each row
    while($row = $result->fetch_assoc()) {
        echo "<tr><td>" . $row["column_name"] . "</td></tr>"; // Replace 'column_name' with your actual column name
    }
} else {
    echo "0 results";
}

$conn->close();
?>