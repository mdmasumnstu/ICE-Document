create database university;
use university;

CREATE TABLE student4 (
    ID int,
    Name varchar(50)
);

INSERT INTO student4 VALUES (2, 'AzIM'),(8, 'TAHIM');
select *from student4;
DROP TABLE student4;


CREATE TRIGGER Tig AFTER INSERT ON student3 FOR EACH ROW 
 INSERT INTO atudent4 (ID,Name) VALUES (9, 'Abir Hossen');