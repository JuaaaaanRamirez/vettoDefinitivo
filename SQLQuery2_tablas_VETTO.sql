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

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddProduct]
END
GO
CREATE PROCEDURE usp_AddProduct(
	@name VARCHAR(250),
	@description VARCHAR(500),
	
	@priceMin DECIMAL(10,2),
	@priceMaj DECIMAL(10,2),
	@stock INT ,
	@status CHAR(1),
	@photo IMAGE ,
	
	@starts DECIMAL(10,2),
	@searches INT,
	@sales INT ,
	@salesByTime INT,
	@id INT OUT
) AS
	BEGIN
		INSERT INTO PRODUCT (name, description, priceMin,priceMaj, stock, status,photo, starts, searches, sales, salesByTime)
		SELECT @name, @description, @priceMin, @priceMaj, @stock, @status, @photo, @starts, @searches, @sales, @salesByTime
		SET @id = SCOPE_IDENTITY()
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddCarrer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddProduct]
END
GO
CREATE PROCEDURE usp_AddCarrer(
	@product_id INT,
	@carrer VARCHAR(50),	
	@id INT OUT
) AS
	BEGIN
		INSERT INTO CARRER (product_id, carrer)
		SELECT @product_id, @carrer
		SET @id = SCOPE_IDENTITY()
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateProduct]
END
GO
CREATE PROCEDURE usp_UpdateProduct(
	@id INT,
	@name VARCHAR(250),
	@description VARCHAR(500),
	
	@priceMin DECIMAL(10,2),
	@priceMaj DECIMAL(10,2),
	@stock INT ,
	@status CHAR(1),
	@photo IMAGE ,
	
	@starts DECIMAL(10,2),
	@searches INT,
	@sales INT ,
	@salesByTime INT
) AS
	BEGIN
		UPDATE PRODUCT 
		SET name=@name, description=@description, priceMin=@priceMin,priceMaj=@priceMaj, stock=@stock, status=@status,photo=@photo, starts=@starts, searches=@searches, sales=@sales, salesByTime=@salesByTime
		WHERE id=@id
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateCarrer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateProduct]
END
GO
CREATE PROCEDURE usp_UpdateCarrer(
	@product_id INT,
	@carrer VARCHAR(50)
	
) AS
	BEGIN
		UPDATE CARRER 
		SET carrer=@carrer
		WHERE product_id=@product_id
	END



	GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateProduct]
END
GO
CREATE PROCEDURE usp_DeleteProduct(
	@id INT,
	@status CHAR(1)
) AS
	BEGIN
		UPDATE PRODUCT 
		SET status=@status
		WHERE id=@id
	END

SELECT * FROM PRODUCT
SELECT * FROM CARRER

GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_GetTopProducts]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_GetTopProducts]
END
GO
CREATE PROCEDURE usp_GetTopProducts AS
	BEGIN
		SELECT * FROM PRODUCT WHERE status='A' ORDER BY searches desc
	END

GO