CREATE DATABASE Assignment;
USE Assignment;

CREATE TABLE Client_Master (
    ClientNo varchar(6),
    Name varchar(20),
    City varchar(15),
    Pincode int,
    State varchar(15),
    BalDue int
);
drop table Client_Master;

INSERT INTO Client_Master (ClientNo, Name, City, Pincode, State, BalDue) 
VALUES 
('C00001', 'Ivan Bayross', 'Mumbai', 400054, 'Maharashtra', 15000),
('C00002', 'Mamata Mazumder', 'Madras', 870001, 'Tamil Nadu', 0),
('C00003', 'Chhaya Bankar', 'Mumbai', 400057, 'Maharashtra', 5000),
('C00004', 'Ashwini Joshi', 'Bangalore', 500001, 'Karnataka', 0),
('C00005', 'Hansei Colaco', 'Mumbai', 400060, 'Maharashtra', 2000),
('C00006', 'Deepak Sharma', 'Bangalore', 560050, 'Karnataka', 0);

SELECT * FROM Client_Master;

select Name,City,State from Client_Master;


UPDATE Client_Master SET City = 'Bangalore' WHERE ClientNo = 'C00005';
UPDATE Client_Master SET BalDue = 1000 WHERE ClientNo = 'C00001';
DELETE FROM Client_Master WHERE State = 'Tamil Nadu';
ALTER TABLE Client_Master ADD Telephone varchar(10);





