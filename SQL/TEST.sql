USE Practice;
create table test(
       No int,
       Name varchar(34),
       Department varchar(56),
       Institute varchar(65),
       District varchar(34),
       Cost Decimal(6,2)
       );
insert into test( NO,Name,Department, Institute, District,Cost)
 Value( 1,'Amir','ICE','NSTU','Gazipur',7355), 
(9, 'Mira', 'CSE', 'DU', 'Dhaka', 8200), 
(7, 'Raj', 'EEE', 'BUET', 'Chattogram', 9000), 
(8, 'Sara', 'BBA', 'NSU', 'Sylhet', 7450), 
(6, 'Nina', 'MBA', 'IBA', 'Khulna', 7100), 
(2, 'Ravi', 'LAW', 'SUST', 'Barishal', 8200), 
(12, 'Tina', 'MATH', 'JU', 'Rajshahi', 6700),
(3, 'Sam', 'PHY', 'CU', 'Comilla', 7600), 
(10, 'Anna', 'CHE', 'RU', 'Rangpur', 8100), 
(4, 'Mike', 'BIO', 'KU', 'Narayanganj', 7300), 
(11, 'Liam', 'ENG', 'DU', 'Mymensingh', 8500), 
(5, 'Noah', 'HIS', 'JU', 'Jessore', 7900);

drop table test;
truncate table test;
select *from test;

Select *from test where Department IN ('LAW','MATH','BIO');							/* IN */
Select *from test where Institute NOT IN( 'CU','JU','RU');							/* NOT IN */
	
Update test set Name= 'Tanj' where Department='BBA' or District='Dhaka' or Institute='CU';					/* UPDATE */
																		
Alter table test add Salary decimal(6,0);											/* ALTER */
Alter table test drop Salary;
Alter table test modify No decimal(2,0);											/* MODIFY */
Alter table test modify No int ;

Select *from test Where  Cost BETWEEN 7444 and 8200;                           /* Between */
Select *from test where Cost NOT Between 7554 and 8765;							/* NOT BETWEEN */

Select *from dual;															/* DUAL */
select 2*2 from dual;
Select 4+7 as Summation from Dual;

Select *from test;
Select *from test limit 4;                                          /* LIMIT */
Select *from test limit 4,3;
Select *from test limit 2 offset 7;									/* LIMOT Offset */
Select *from test limit 2,7;

SELECT * FROM test WHERE Cost BETWEEN 7444 AND 8200 LIMIT 3,2;
Select *from test where Cost Between 7654 and 8976 Limit 4 offset 2;

Select *from test where District like "dh%";
Select *from test where District like "_hak_";
Select *from test where District like "%d%";

Select District from test as Zill;
Select District as "Home District" from test;

SELECT * FROM test ORDER BY No DESC LIMIT 4;

Select Institute, sum(Cost) as Total from test where Cost> 7555 group by Institute having sum(Cost);

SELECT * FROM test WHERE Department IS NULL;
SELECT * FROM test WHERE Department IS NOT NULL;

Select *from test;
Alter table test add Age int ;
Alter table test drop Age;
Alter table test add Age int NOT NULL Default 0;
Alter table test add Age int NOT NULL;

Alter table test modify No int Unique;
Alter table test modify Department varchar(34) Unique;
Alter table test add PRIMARY KEY(No,Department);
Alter table test drop primary key;

CREATE INDEX idx_composite ON test (Department, Institute, District);
SHOW INDEX FROM test;



