--Creacion de tabla PRODUCT
--------------------------------------------------------------
IF OBJECT_ID('dbo.CARRER', 'U') IS NOT NULL
	DROP TABLE dbo.CARRER
GO
IF OBJECT_ID('dbo.PRODUCT', 'U') IS NOT NULL
	DROP TABLE dbo.PRODUCT
GO

SELECT * FROM PRODUCT
DELETE FROM PRODUCT WHERE id=5
SELECT * FROM CARRER
GO
CREATE TABLE PRODUCT (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(250) NOT NULL,
	description VARCHAR(500) NOT NULL,
	priceMin DECIMAL(10,2) NOT NULL,
	priceMaj DECIMAL(10,2) NOT NULL,
	stock INT NOT NULL,
	status CHAR(1) NULL,
	photo IMAGE  NULL,
	
	starts DECIMAL(10,2) NULL,
	searches INT  NULL,
	sales INT  NULL,
	salesByTime INT NULL
)
GO
CREATE TABLE CARRER(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	product_id INT NOT NULL,
	carrer VARCHAR(50) NOT NULL
)
GO
ALTER TABLE CARRER
ADD CONSTRAINT FK_CARRER_PRODUCT_ID FOREIGN KEY (product_id)
REFERENCES PRODUCT(id)
GO
SELECT * FROM PRODUCT
--------------------------------------------------------------------------
INSERT INTO PRODUCT (name, description, priceMin,priceMaj, stock,status)
VALUES ('Casco de soldar','requisito para taller de procesos', 5.5, 4.5, 200,'A')
--SELECT * FROM PRODUCT 
GO
INSERT INTO PRODUCT (name, description, priceMin,priceMaj, stock,status)
VALUES ('Cemento Sol','Marca premium', 5, 4, 100,'A')
GO

INSERT INTO CARRER (product_id, carrer)
VALUES (5, 'mecanica')
--SELECT * FROM CARRER
GO
INSERT INTO CARRER (product_id, carrer)
VALUES (6, 'geologia')

SELECT * FROM CARRER WHERE product_id=5

GO
SELECT * FROM CARRER WHERE product_id=1


UPDATE PRODUCT
SET description='Jabón oloroso'
WHERE id=3
GO

UPDATE CARRER
SET carrer='filosofia'
WHERE product_id=1 AND id=2 --id juega con contador i
GO

DELETE FROM PRODUCT
WHERE id=2
--Se recomienda en vez de eliminar (delete), actualizar el status.
UPDATE PRODUCT
SET status='I'
WHERE id=3