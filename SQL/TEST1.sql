USE Practice;
CREATE table test1(
       No int,
       Name varchar(34),
       Department varchar(56),
       Institute varchar(65),
       District varchar(34),
       Cost Decimal(6,2)
       );
INSERT INTO test1 (NO, Name, Department, Institute, District, Cost) /* Insert value */
VALUES
  (101, 'Aisha', 'CSE', 'DU', 'Dhaka', 7800),
  (102, 'John', 'EEE', 'BUET', 'Chattogram', 8200),
  (103, 'Emma', 'BBA', 'NSU', 'Sylhet', 7100),
  (104, 'David', 'MATH', 'JU', 'Rajshahi', 7500),
  (105, 'Olivia', 'BIO', 'KU', 'Khulna', 6900),
  (106, 'Michael', 'CHE', 'RU', 'Barishal', 7400),
  (107, 'Sophia', 'ENG', 'JU', 'Comilla', 6700),
  (3, 'Sam', 'PHY', 'CU', 'Comilla', 7600),
  (109, 'Isabella', 'PHY', 'NSU', 'Narayanganj', 8100),
  (110, 'Ethan', 'LAW', 'SUST', 'Jessore', 7200),
  (111, 'Mason', 'MBA', 'IBA', 'Mymensingh', 8500),
  (112, 'Mia', 'ICE', 'NSTU', 'Gazipur', 7600);

Select *from test1;

Select *from test1 order by No asc;

truncate table test1;
Delete from test1;
Delete from test1 where District='Comilla';