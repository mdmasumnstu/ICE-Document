use Assignment;
CREATE TABLE SALESMAN (
    SalesmanNo VARCHAR(6) PRIMARY KEY,
    Name VARCHAR(50),
    Address1 VARCHAR(50),
    Address2 VARCHAR(50),
    City VARCHAR(50),
    PinCode VARCHAR(6),
    State VARCHAR(50),
    SalAmt INT,
    TgtToGet INT,
    YtdSales INT,
    Remarks VARCHAR(50)
);

INSERT INTO SALESMAN (SalesmanNo, Name, Address1, Address2, City, PinCode, State, SalAmt, TgtToGet, YtdSales, Remarks) VALUES
('S00001', 'Aman', 'A/14', 'Worli', 'Mumbai', '400002', 'Maharashtra', 3000, 100, 50, 'Good'),
('S00002', 'Omkar', '65', 'Nariman', 'Mumbai', '400001', 'Maharashtra', 3000, 200, 100, 'Good'),
('S00003', 'Raj', 'P-7', 'Bandra', 'Mumbai', '400032', 'Maharashtra', 3000, 200, 100, 'Good'),
('S00004', 'Ashish', 'A/5', 'Juhu', 'Mumbai', '400044', 'Maharashtra', 3500, 200, 150, 'Good');

select *from SALESMAN;

SELECT Name,SalAmt FROM SALESMAN WHERE SalAmt = 3000;
UPDATE SALESMAN SET City = 'Pune';
DELETE FROM SALESMAN WHERE SalAmt = 3500;

