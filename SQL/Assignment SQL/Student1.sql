create database university;
use university;

create table student (
            ID int,
            Name varchar(50),
            Department varchar(50),
            CGPA decimal(3,2),
            Year int,
            Address varchar(50),
            Cost int
			);
            
INSERT INTO student VALUES 
(2, 'Azad', 'Physics', 3.66, 2023, 'Dhaka', 4500),
(8, 'Rabbi', 'Chemistry', 3.26, 2022, 'Khulna', 5500),
(12, 'Tamin', 'Statistics', 3.06, 2021, 'Faridpur', 4800),
(6, 'Zahid', 'Physics', 3.86, 2023, 'Natore', 5000),
(4, 'Mizan', 'CSE', 3.73, 2024, 'Bhola', 5210),
(1, 'Sumon', 'Sociology', 3.36, 2020, 'Dhaka', 4500);

select ID,Name,Department,CGPA,Year,Address,Cost from student;
select *from student;

select Name,Department,Address,Cost where Department='Physics';

CREATE TRIGGER TigName AFTER INSERT ON student FOR EACH ROW 

	INSERT INTO student2 (NEW.ID, NEW.Name, NEW.Department, NEW.CGPA, NEW.Year, NEW.Address, NEW.Cost)
    VALUES (9, 'Abir Hossen', 'Astro', 3.06, 2013, 'Dinajpur', 5433);


