create database university;
use university;

CREATE TABLE student3 (
    ID int,
    Name varchar(50)
);

INSERT INTO student3 VALUES (2, 'Azad'),(8, 'Rabbi');

select *from student3;


CREATE TRIGGER Tig AFTER INSERT ON student3 FOR EACH ROW 
 INSERT INTO atudent4 (ID,Name) VALUES (9, 'Abir Hossen');


