USE Assignment;
CREATE TABLE SALESMAN_MASTER2 (
    SALESMANNO VARCHAR(6) PRIMARY KEY,
    SALESMANNAME VARCHAR(20) NOT NULL,
    ADDRESS1 VARCHAR(30) NOT NULL,
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(20) ,
    PINCODE VARCHAR(6),
    STATE VARCHAR(20),
    SALAMT DECIMAL(8,2) NOT NULL CHECK (SALAMT > 0),
    TGTTOGET DECIMAL(6,2) NOT NULL CHECK (TGTTOGET > 0),
    YTDSALES DECIMAL(6,2) NOT NULL,
    REMARKS VARCHAR(60)
);

-- Insert values into the SALESMAN_MASTER2 table
INSERT INTO SALESMAN_MASTER2 (SALESMANNO, SALESMANNAME, ADDRESS1, ADDRESS2, CITY, PINCODE, STATE, SALAMT, TGTTOGET, YTDSALES, REMARKS) VALUES
('S00001', 'John Doe', '123 Main St', 'Apt 4B', 'New York', '123456', 'NY', 50000.00, 100, 750, 'Top performer'),
('S00002', 'Jane Smith', '456 Elm St', NULL, 'Los Angeles', '654321', 'CA', 45000.00, 900, 600, 'Consistent sales'),
('S00003', 'Jim Brown', '789 Oak St', 'Suite 12', 'Dallas', '789012', 'TX', 47000.00, 950, 700, 'Excellent customer service'),
('S00004', 'Emily White', '321 Pine St', NULL, 'Miami', '321987', 'FL', 48000.00, 920, 680, 'High potential'),
('S00005', 'Michael Green', '654 Maple St', 'Unit 5', 'Seattle', '987654', 'WA', 46000.00, 880, 640, 'Strong closer'),
('S00006', 'Sarah Black', '987 Birch St', NULL, 'Chicago', '456789', 'IL', 49000.00, 930, 710, 'Great team player');

-- Select all data from the SALESMAN_MASTER2 table
SELECT * FROM SALESMAN_MASTER2;
DROP TABLE salesman_master2;
