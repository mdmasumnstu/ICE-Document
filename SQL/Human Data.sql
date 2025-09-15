use university1;
create table People (
ID Decimal(2,0),
Name varchar(22),
Father_Name Varchar(34),
Mother_Name varchar(33),
Address varchar(54),
Country varchar(34),
Phone Decimal(11,0),
Profession varchar(23),
Income Decimal(5,0),
Cost Decimal(4,0)
);
Select *from People;
INSERT INTO People (ID, Name, Father_Name, Mother_Name, Address, Country, Phone, Profession, Income, Cost)
VALUES (1,'Amir' ,'Azad', 'Asma', 'Azimpur', 'Bangladesh', 01823564325, 'Engineert', 45445,2716),
	   (2,'Amin' ,'Azid', 'Bsma', 'Mirmpur', 'Bangladesh', 01826424325, 'Student', 3445,5686),
       (3,'Beir' ,'Jamil', 'Maleka', 'Khilgoan', 'Bangladesh', 01823345257, 'Teacher', 43445,5406),
	   (4,'Fray' ,'AKarim', 'Abraley', 'Kolkata', 'India', 24426424325, 'Student', 3445,8656),
       (7,'Pakki' ,'Dakin', 'Jannat', 'Alomdanga', 'Bangladesh', 01823234325, 'Doctor', 43465,6436),
	   (9,'Kirolus' ,'Hinrokus', 'Fasoku', 'London', 'England', 86426424325, 'Pilot', 63445,4586),
       (5,'Hamilton' ,'Masakazza', 'Masalina', 'New York', 'United States', 76543564325, 'Engineer', 93445,9786),
	   (8,'Samson' ,'Williom', 'Karolina', 'Sidney', 'Australia', 65396424325, 'Student', 3445,2986),
       (6,'Jaquline' ,'Jaqub', 'Rahike', 'Welington', 'New Zealand', 48740564325, 'Doctor', 43475,2086),
	   (10,'Khalid Bin Waled' ,'Waled Bin Belal', 'Waleda', 'Zedda', 'Saudi Arabia', 12846424325, 'Teacher', 63445,2786);

Select *from People;
Select ID, Name, Father_Name, Address, Country, Profession, Income  from People;
select Name, Profession, Address,Income from People  where  Income>3445;

Select ID,Name, Address,Profession from People order by ID asc;
Select ID,Name, Address,Profession from People order by ID desc;
Select ID,Name, Address,Profession from People order by Name asc;
Select ID,Name, Address,Profession from People order by Name desc;

Select distinct *from People;

Select max(Income) from People;
Select max(Income) as Highest_Income from People;

Select min(Cost) as Minimum_Cost from People;
Select sum(Income) as Total_Income from People;
Select avg(Cost) as Average from People;
Select count(ID) as Total_People from People;
Select  count(Income) as Income_Value from People;

Select *from People where NOT Country='Bangladesh';
Select *from People where Country='Bangladesh' and Profession='Student';
Select *from People where NOT Country='Bangladesh' and Profession='Student';

Select *from People where  Country='Bangladesh' Or Profession='Student';
Select *from People where NOT  Country='Bangladesh' Or Profession='Student';

Truncate People;
Delete from People;
Drop table People;

Select *from People where Country LIKE 'Ban%';
Select *from People where Country LIKE '__n_la_esh';
