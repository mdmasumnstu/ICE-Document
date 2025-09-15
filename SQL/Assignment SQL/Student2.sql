use university;

create table student2 (
            ID int,
            Name varchar(50),
            Department varchar(50),
            CGPA decimal(3,2),
            Year int,
            Address varchar(50),
            Cost int
            );
            
INSERT INTO student2 VALUES 
(3, 'Karim', 'Mathematics', 3.75, 2025, 'Chattogram', 4600),
(9, 'Ibrahim', 'Biology', 3.45, 2023, 'Rajshahi', 5700),
(13, 'Hasan', 'Economics', 3.15, 2022, 'Mymensingh', 4900),
(7, 'Saif', 'Physics', 3.95, 2024, 'Sylhet', 5100),
(5, 'Anis', 'EEE', 3.85, 2025, 'Barisal', 5300),
(2, 'Nayeem', 'Anthropology', 3.50, 2021, 'Gazipur', 4600);

select *from student2;