-- TABLES
-- DELETE TABLE
DROP TABLE dbo.SALE_DETAIL
DROP TABLE dbo.SALE

-- CREATE TABLE SALES
GO
CREATE TABLE SALE(
	id					INT				NOT NULL PRIMARY KEY, 
	status				CHAR(1)			NOT NULL,
	total				DECIMAL(10, 2)	NOT NULL,
	address				VARCHAR(500)	NOT NULL,
	reference			VARCHAR(500)	NOT NULL,
	paidmode			VARCHAR(100)	NOT NULL,
	saledate			VARCHAR(100)	NOT NULL,

	--RELATION
	
	customer_id			INT				NULL,
	storemanager_id		INT				NULL
)

-- CREATE TABLE SALE_DETAIL
GO
CREATE TABLE SALE_DETAIL (
	id					INT				NOT NULL PRIMARY KEY IDENTITY(0,1),
	quantity			INT				NULL,
	subtotal			DECIMAL(10,2)	NULL,
	unit_price			DECIMAL(10,2)	NULL,

	-- RELATION

	sale_id				INT				NOT NULL,
	product_id			INT				NOT NULL,
)
GO


-- LLAVES FORÁNEAS

-- SALES
/*GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_CUSTOMER_ID FOREIGN KEY (customer_id)
REFERENCES CUSTOMER(id)
ON DELETE CASCADE


GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_STOREMANAGER_ID FOREIGN KEY (storemanager_id)
REFERENCES storemanager(id)
ON DELETE NO ACTION
GO*/

-- SALE DETAIL
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_SALE_ID FOREIGN KEY (sale_id)
REFERENCES SALE(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_PRODUCT_ID FOREIGN KEY (product_id)
REFERENCES PRODUCT(id)
GO


-- CRUD METHODS


-- SALE

-- ADD SALE
GO
CREATE PROCEDURE usp_AddSale(
	@status				CHAR(1),
	@total				DECIMAL(10,2),
	@address			VARCHAR(500),
	@reference			VARCHAR(500),
	@paidmode			VARCHAR(100),
	@saledate			VARCHAR(100),

	--RELATION
	@customer_id			INT,
	@storemanager_id		INT,
	@id						INT OUT
) AS
	BEGIN
		INSERT INTO SALE (status, total, address,reference, paidmode,saledate,customer_id, storemanager_id,id)
		SELECT @status, @total, @address, @reference, @paidmode, @saledate, @customer_id, @storemanager_id, @id
	END

-- QUERY

-- QUERYSALEBYID
GO
CREATE PROCEDURE usp_QuerySaleById(
	@id INT
) AS
	SELECT * FROM SALE
	WHERE	id = @id
GO

-- QUERYLASTSALE
GO
CREATE PROCEDURE usp_QueryLastSale AS
	SELECT * FROM SALE
	WHERE	id=(SELECT COUNT(*) FROM SALE)-1
GO

-- QUERYALLLSALES
GO
CREATE PROCEDURE usp_QueryAllSales AS
	SELECT * FROM SALE
GO


-- UPDATE SALE
GO
CREATE PROCEDURE dbo.usp_UpdateSale(

	@status				CHAR(1),
	@total				DECIMAL(10,2),
	@address			VARCHAR(500),
	@reference			VARCHAR(500),
	@paidmode			VARCHAR(100),
	@saledate			VARCHAR(100),

	--RELATION
	@customer_id			INT,
	@storemanager_id		INT,
	@id						INT
 ) AS 
	BEGIN
		UPDATE SALE
		SET status=@status,
			total=@total, 
			address=@address, 
			reference=@reference, 
			paidmode=@paidmode,  
			saledate=@saledate,
			customer_id=@customer_id,
			storemanager_id=@storemanager_id
				WHERE id=@id
	END
GO

-- "DELETE" SALE
GO
CREATE PROCEDURE dbo.usp_DeleteSale(
	@id INT
) AS
	BEGIN
		UPDATE SALE
		SET status='H'
		WHERE id=@id
	END
GO

-- SALE DETAIL


-- ADD SALEDETAIL
GO
CREATE PROCEDURE usp_AddSaleDetail(
	@id				    INT OUT,
	@quantity			INT,
	@subtotal			DECIMAL(10,2),
	@unit_price			DECIMAL(10,2),

	-- RELATION

	@sale_id			INT,
	@product_id			INT
) AS
	BEGIN
		INSERT INTO SALE_DETAIL(quantity, subtotal, unit_price, sale_id,product_id)
		SELECT @quantity, @subtotal, @unit_price, @sale_id, @product_id
		SET @id = SCOPE_IDENTITY()
	END

-- QUERYSALESDETAILSBYSALE_ID
GO
CREATE PROCEDURE usp_QuerySalesDetailsBySaleId (
	@sale_id INT
)AS
	BEGIN
		SELECT * FROM SALE_DETAIL WHERE sale_id=@sale_id
	END
GO

-- QUERYSALESDETAILBYSALE_IDANDPRODUCT_ID
GO
CREATE PROCEDURE usp_QuerySaleDetailBySaleIdAndProductId (
	@sale_id INT,
	@product_d INT
)AS
	BEGIN
		SELECT * FROM SALE_DETAIL WHERE (sale_id=@sale_id AND product_id=@product_d)
	END
GO

-- UPDATE SALE DETAIL
GO
CREATE PROCEDURE dbo.usp_UpdateSaleDetail(
	@quantity			INT,
	@subtotal			DECIMAL(10,2),
	@unit_price			DECIMAL(10,2),

	-- RELATION

	@sale_id			INT,
	@product_id			INT

 ) AS 
	BEGIN
		UPDATE SALE_DETAIL
		SET quantity=@quantity,
			subtotal=@subtotal, 
			unit_price=@unit_price
		WHERE (sale_id=@sale_id AND product_id=@product_id)
	END
GO

-- "DELETE" SALEDETAIL
GO
CREATE PROCEDURE dbo.usp_DeleteSaleDetail(
	@sale_id INT,
	@product_id INT
) AS
	BEGIN
		DELETE FROM SALE_DETAIL WHERE (sale_id=@sale_id AND product_id=@product_id)
	END
GO