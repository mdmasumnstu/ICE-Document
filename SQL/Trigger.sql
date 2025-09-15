USE Practice;

-- Creating Table bd1
CREATE TABLE bd1 (
    Name VARCHAR(50),
    roll INT
);

Select *from bd1;

-- Creating Table bd2
CREATE TABLE bd2 (
    Name VARCHAR(50),
    roll INT
);

Select *from bd2;

-- Creating Trigger (Before inserting data)
DELIMITER $$

CREATE TRIGGER tr1 
AFTER INSERT ON bd1 
FOR EACH ROW 
BEGIN
    INSERT INTO bd2 (Name, roll) 
    VALUES (NEW.Name, NEW.roll);
END $$

DELIMITER ;
SHOW TRIGGERS;


-- Inserting Data into bd1
INSERT INTO bd1 VALUES
('Tamim', 1),
('Asik', 2),
('Topon', 3);

select *from bd1;

-- Testing the Trigger
INSERT INTO bd1 VALUES ('Sakib', 4);

-- Checking bd2 to see if data was inserted automatically
SELECT * FROM bd2;