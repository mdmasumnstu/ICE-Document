USE Assignment;
CREATE TABLE Client_Master1 (
    CLIENTNO VARCHAR(6) PRIMARY KEY CHECK (CLIENTNO LIKE 'C%'),
    NAME VARCHAR(20) NOT NULL,
    ADDRESS1 VARCHAR(30)
);

INSERT INTO Client_Master1 (CLIENTNO, NAME, ADDRESS1) VALUES
('C10002', 'Smith', 'Mumbai'),
('C10003', 'Amin', 'Dhaka'),
('C10004', 'Carol', 'London'),
('C10005', 'Susnto', 'Mumbai'),
('C10006', 'Rabbi', 'Dhaka'),
('C10007', 'Watson', 'London');

SELECT * FROM Client_Master1;
