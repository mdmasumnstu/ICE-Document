USE CHAPTER;
CREATE TABLE SALESMAN_MASTER1 (
    SALESMANNO    VARCHAR(6) PRIMARY KEY,
    SALESMANNAME  VARCHAR(20) NOT NULL,
    ADDRESS1      VARCHAR(30),
    ADDRESS2      VARCHAR(30),
    CITY          VARCHAR(20),
    STATE         VARCHAR(20),
    PINCODE       DECIMAL(6),
    SALAMT        DECIMAL(10,2),
    TARGET        DECIMAL(10,2),
    YTDSALES      DECIMAL(10,2),
    REMARKS       DECIMAL(60)
);
INSERT INTO SALESMAN_MASTER1 (SALESMANNO, SALESMANNAME, ADDRESS1, ADDRESS2, CITY, STATE, PINCODE, SALAMT, TARGET, YTDSALES, REMARKS)
VALUES
('S001', 'Alice Johnson', '123 First St', 'Apt 101', 'Dhaka', 'Dhaka', 1000, 50000.00, 100000.00, 75000.00, 'Top performer'),
('S002', 'Bob Smith', '456 Second St', NULL, 'Chattogram', 'Chattogram', 4000, 45000.00, 90000.00, 60000.00, 'Consistent sales'),
('S003', 'Charlie Davis', '789 Third St', 'Suite 300', 'Sylhet', 'Sylhet', 3100, 55000.00, 110000.00, 80000.00, 'Excellent customer service'),
('S004', 'Diana Evans', '321 Fourth St', 'Floor 2', 'Rajshahi', 'Rajshahi', 6000, 47000.00, 94000.00, 70000.00, 'Great team player'),
('S005', 'Eve White', '654 Fifth St', 'Unit 5', 'Barisal', 'Barisal', 8200, 52000.00, 104000.00, 78000.00, 'High potential'),
('S006', 'Frank Brown', '987 Sixth St', 'Apt 203', 'Khulna', 'Khulna', 9200, 48000.00, 96000.00, 72000.00, 'Strong closer');

SELECT * FROM SALESMAN_MASTER1;