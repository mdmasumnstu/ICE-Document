use Assignment;
drop table product_master;

CREATE TABLE PRODUCT_MASTER (
    ProductNo VARCHAR(10),
    Description VARCHAR(50),
    ProfitPercent DECIMAL(3,1),
    UnitMeasure VARCHAR(10),
    QtyOnHand INT,
    ReorderLvl INT,
    SellPrice DECIMAL(10,2),
    CostPrice DECIMAL(10,2)
);

INSERT INTO PRODUCT_MASTER (ProductNo, Description, ProfitPercent, UnitMeasure, QtyOnHand, ReorderLvl, SellPrice, CostPrice) VALUES
('P00001', 'T-Shirts', 5.0, 'Piece', 200, 50, 350.00, 250.00),
('P0345', 'Shirts', 6.0, 'Piece', 150, 20, 500.00, 350.00),
('P06734', 'Cotton Jeans', 5.0, 'Piece', 100, 20, 600.00, 450.00),
('P07865', 'Jeans', 5.0, 'Piece', 150, 50, 850.00, 650.00),
('P07868', 'Trousers', 2.0, 'Piece', 150, 50, 700.00, 650.00),
('P07885', 'Pull Overs', 2.3, 'Piece', 80, 30, 700.00, 450.00),
('P07965', 'Denim Shirts', 5.0, 'Piece', 100, 40, 750.00, 500.00),
('P07975', 'Lycra Tops', 5.0, 'Piece', 70, 30, 450.00, 300.00),
('P08865', 'Skirts', 5.0, 'Piece', 75, 30, 450.00, 300.00);

select *from PRODUCT_MASTER;
UPDATE PRODUCT_MASTER SET CostPrice = 950.00 WHERE Description = 'Trousers';
DELETE FROM PRODUCT_MASTER WHERE QtyOnHand = 100;
ALTER TABLE PRODUCT_MASTER MODIFY SellPrice DECIMAL(10,2);


