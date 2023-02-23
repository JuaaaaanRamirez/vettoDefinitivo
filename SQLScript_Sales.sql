-- TABLES
-- DELETE TABLE
DROP TABLE dbo.SALE_DETAIL
DROP TABLE dbo.SALE

-- CREATE TABLE SALES
GO
CREATE TABLE SALE(
	id					INT				NOT NULL PRIMARY KEY IDENTITY(0,1),
	status				CHAR(1)			NOT NULL,
	total				DECIMAL(10, 2)	NOT NULL,
	address				VARCHAR(500)	NOT NULL,
	reference			VARCHAR(500)	NULL,
	paidmode			VARCHAR(100)	NOT NULL,
	saledate			VARCHAR(100)	NOT NULL,

	--RELATION
	
	customer_id			INT				NULL,
	storemanager_id		INT				NULL
)

-- CREATE TABLE SALE_DETAIL
GO
CREATE TABLE SALE_DETAIL (
	id					INT				NOT NULL PRIMARY KEY IDENTITY(1,1),
	quantity			INT				NULL,
	subtotal			DECIMAL(10,2)	NULL,
	unit_price			DECIMAL(10,2)	NULL,

	-- RELATION

	sale_id				INT				NOT NULL,
	product_id			INT				NOT NULL,
)
GO


-- LLAVES FOR�NEAS

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
		INSERT INTO SALE (status, total, address,reference, paidmode,saledate,customer_id, storemanager_id)
		SELECT @status, @total, @address, @reference, @paidmode, @saledate, @customer_id, @storemanager_id
		SET @id = SCOPE_IDENTITY()
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
CREATE PROCEDURE usp_QueryLastSale() AS
	SELECT * FROM SALE
	WHERE	id= 
GO
