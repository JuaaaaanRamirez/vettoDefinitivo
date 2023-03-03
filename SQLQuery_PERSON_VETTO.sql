--Creacion de tabla Person
--------------------------------------------------------------
IF OBJECT_ID('dbo.PERSON', 'U') IS NOT NULL
	DROP TABLE dbo.PERSON
GO
IF OBJECT_ID('dbo.WHISH_LIST', 'U') IS NOT NULL
	DROP TABLE dbo.WHISH_LIST
GO


SELECT * FROM PERSON
SELECT * FROM PERSON WHERE id=1
DELETE FROM PERSON WHERE id=3000




SELECT * FROM WHISH_LIST WHERE customer_id=10
GO

CREATE TABLE PERSON (
	
	id INT IDENTITY(1,1) NOT NULL PRIMARY KEY,
	doc_number VARCHAR(15)  NULL ,
	name VARCHAR(100) NOT NULL,
	last_name VARCHAR(100) NOT NULL,
	phone_number VARCHAR(50) NULL,
	email VARCHAR(150)  NULL ,
	username VARCHAR(20)  NULL UNIQUE ,
	password VARCHAR(20)  NULL ,
	gender CHAR(1) NULL,
	birthday DATE NULL,
	profile CHAR(1)  NULL,----'S' estudiante , 'M' manager , 'A' announcer, 'C' sellerCompany
	photo IMAGE  NULL,

	customer_points INT NULL,
	address VARCHAR(150) NULL,

	ad IMAGE NULL,
	ad_in_sistem BIT NULL,
	number_picture_box INT NULL,
	web_site_link VARCHAR(200) NULL,
	company_name VARCHAR(100) NULL,

	goal DECIMAL(10,2)  NULL,
	salary VARCHAR(15) NULL,
	store VARCHAR(50) NULL,
	status VARCHAR(15) NULL

)
GO

CREATE TABLE WHISH_LIST (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	customer_id INT NOT NULL,
	product_id INT NOT NULL
)
GO
ALTER TABLE WHISH_LIST
ADD CONSTRAINT FK_WHISH_LIST_PERSON_ID FOREIGN KEY (customer_id)
REFERENCES PERSON(id)
ON DELETE CASCADE
GO
ALTER TABLE WHISH_LIST
ADD CONSTRAINT FK_WHISH_LIST_PRODUCT_ID FOREIGN KEY (product_id)
REFERENCES PRODUCT(id)
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Add_Whist_List]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Add_Whist_List]
END
GO
CREATE PROCEDURE usp_Add_Whist_List(
	@customer_id INT  ,
	@product_id INT  ,
	@id INT OUT
) AS
	BEGIN
		INSERT INTO WHISH_LIST(customer_id , product_id)
		SELECT @customer_id,@product_id
		SET @id = SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Update_Whist_List]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Update_Whist_List]
END
GO
CREATE PROCEDURE usp_Update_Whist_List(
	@id INT,
	@customer_id INT  ,
	@product_id INT  
) AS
	BEGIN
		UPDATE WHISH_LIST 
		SET customer_id=@customer_id,product_id=@product_id
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Delete_Whist_List]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Delete_Whist_List]
END
GO
CREATE PROCEDURE dbo.usp_Delete_Whist_List(
	@customer_id INT  ,
	@product_id INT 
) AS
	BEGIN
		DELETE FROM WHISH_LIST WHERE (customer_id=@customer_id AND product_id=@product_id)
	END

GO




INSERT INTO PERSON (doc_number,name,last_name, username, password,profile,status)
VALUES ('77777777','Vetto','App','Vetto','password','C','A')
GO
INSERT INTO PERSON (doc_number,name,last_name,phone_number,email,username,password,gender,profile)
VALUES ('1','A','A','A','A','A','A','F','S')
GO
INSERT INTO PERSON (doc_number,name,last_name,phone_number,email,username,password,gender,profile)
VALUES ('73117200','Delia','Torres','999888777','a20191230@pucp.edu.pe','Delia','delia','F','S')
GO

INSERT INTO WHISH_LIST ( customer_id, product_id)
VALUES (1,5)
GO


---Add announcer
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Add_Person_Announcer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Add_Person_Announcer]
END
GO
CREATE PROCEDURE usp_Add_Person_Announcer(
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@last_name VARCHAR(100),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@username VARCHAR(20) ,
	@password VARCHAR(20),
	@gender CHAR(1),
	@birthday DATE ,
	@profile CHAR(1),
	@photo IMAGE ,

	@ad IMAGE,
	@ad_in_sistem BIT,
	@number_picture_box INT,
	@web_site_link VARCHAR(200),
	@company_name VARCHAR(100),
	@id INT OUT
) AS
	BEGIN
		INSERT INTO PERSON(doc_number,name,last_name,phone_number,email,username,password,gender,birthday,profile,photo,ad,ad_in_sistem,number_picture_box,web_site_link,company_name)
		SELECT @doc_number,@name,@last_name,@phone_number,@email,@username,@password,@gender,@birthday,@profile,@photo,@ad,@ad_in_sistem,@number_picture_box,@web_site_link,@company_name
		SET @id = SCOPE_IDENTITY()
	END

GO



--Query
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllWhistListByIsUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllWhistListByIsUser]
END
GO
CREATE PROCEDURE usp_QueryAllWhistListByIsUser(
	@customer_id INT
) AS
	BEGIN

		SELECT P.id as id, P.name as name, P.priceMin as price, P.description as description
		FROM  WHISH_LIST W
		INNER JOIN PRODUCT P ON P.id = W.product_id
		WHERE W.customer_id = @customer_id
		
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Add_Person_Customer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Add_Person_Customer]
END
GO
CREATE PROCEDURE usp_Add_Person_Customer(
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@last_name VARCHAR(100),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@username VARCHAR(20) ,
	@password VARCHAR(20),
	@gender CHAR(1),
	@birthday DATE ,
	@profile CHAR(1),
	@photo IMAGE ,

	@customer_points INT ,
	@address VARCHAR(150) ,

	@id INT OUT
) AS
	BEGIN
		INSERT INTO PERSON(doc_number,name,last_name,phone_number,email,username,password,gender,birthday,profile,photo,customer_points,address)
		SELECT @doc_number,@name,@last_name,@phone_number,@email,@username,@password,@gender,@birthday,@profile,@photo,@customer_points,@address
		SET @id = SCOPE_IDENTITY()
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Add_Person_Store_Manager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Add_Person_Store_Manager]
END
GO
CREATE PROCEDURE usp_Add_Person_Store_Manager(
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@last_name VARCHAR(100),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@username VARCHAR(20) ,
	@password VARCHAR(20),
	@gender CHAR(1),
	@birthday DATE ,
	@profile CHAR(1),
	@photo IMAGE ,

	@goal DECIMAL(10,2)  ,
	@salary VARCHAR(15) ,
	@store VARCHAR(50) ,
	@status VARCHAR(15) ,


	@id INT OUT
) AS
	BEGIN
		INSERT INTO PERSON(doc_number,name,last_name,phone_number,email,username,password,gender,birthday,profile,photo,goal,salary,store,status)
		SELECT @doc_number,@name,@last_name,@phone_number,@email,@username,@password,@gender,@birthday,@profile,@photo,@goal,@salary,@store,@status
		SET @id = SCOPE_IDENTITY()
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePerson_Announcer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePerson_Announcer]
END
GO
CREATE PROCEDURE usp_UpdatePerson_Announcer(
	@id INT,
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@last_name VARCHAR(100),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@username VARCHAR(20) ,
	@password VARCHAR(20),
	@gender CHAR(1),
	@birthday DATE ,
	@profile CHAR(1),
	@photo IMAGE ,
	
	@ad IMAGE,
	@ad_in_sistem BIT,
	@number_picture_box INT,
	@web_site_link VARCHAR(200),
	@company_name VARCHAR(100)
) AS
	BEGIN
		UPDATE PERSON 
		SET doc_number=@doc_number,name=@name,last_name=@last_name, phone_number=@phone_number,email=@email,username=@username,password=@password,gender=@gender,birthday=@birthday,profile=@profile, photo=@photo,ad=@ad,ad_in_sistem=@ad_in_sistem,number_picture_box=@number_picture_box,web_site_link=@web_site_link,company_name=@company_name
		WHERE id=@id
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePerson_Customer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePerson_Customer]
END
GO
CREATE PROCEDURE usp_UpdatePerson_Customer(
	@id INT,
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@last_name VARCHAR(100),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@username VARCHAR(20) ,
	@password VARCHAR(20),
	@gender CHAR(1),
	@birthday DATE ,
	@profile CHAR(1),
	@photo IMAGE ,

	@customer_points INT ,
	@address VARCHAR(150) 
) AS
	BEGIN
		UPDATE PERSON 
		SET doc_number=@doc_number,name=@name,last_name=@last_name, phone_number=@phone_number,email=@email,username=@username,password=@password,gender=@gender,birthday=@birthday,profile=@profile, photo=@photo,customer_points=@customer_points,address=@address
		WHERE id=@id
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePerson_Store_Manager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePerson_Store_Manager]
END
GO
CREATE PROCEDURE usp_UpdatePerson_Store_Manager(
	@id INT,
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@last_name VARCHAR(100),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@username VARCHAR(20) ,
	@password VARCHAR(20),
	@gender CHAR(1),
	@birthday DATE ,
	@profile CHAR(1),
	@photo IMAGE ,
	
	@goal DECIMAL(10,2)  ,
	@salary VARCHAR(15) ,
	@store VARCHAR(50) ,
	@status VARCHAR(15) 
) AS
	BEGIN
		UPDATE PERSON 
		SET doc_number=@doc_number,name=@name,last_name=@last_name, phone_number=@phone_number,email=@email,username=@username,password=@password,gender=@gender,birthday=@birthday,profile=@profile, photo=@photo,goal=@goal,salary=@salary,store=@store,status=@status
		WHERE id=@id
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_Delete_Person]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_Delete_Person]
END
GO
CREATE PROCEDURE dbo.usp_Delete_Person(
	@id INT
) AS
	BEGIN
		DELETE FROM PERSON WHERE id=@id
	END

GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_ValidateUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_ValidateUser]
END
GO
CREATE PROCEDURE dbo.usp_ValidateUser (
	@username VARCHAR(20),
	@password VARCHAR(20)
)
AS
	SELECT * FROM PERSON P 
	WHERE P.username = @username
	AND	P.password = @password 
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllCustomer]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllCustomer
AS
	SELECT * FROM PERSON WHERE profile='S' AND id !=15
	ORDER BY id
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryCustomerByNameOrByLastName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryCustomerByNameOrByLastName]
END
GO
CREATE PROCEDURE dbo.usp_QueryCustomerByNameOrByLastName
	@name VARCHAR(50)

AS
	SELECT * FROM PERSON WHERE profile='S' AND (name LIKE '%@name%' OR last_name LIKE '%@name%') AND id!=15


	ORDER BY id
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryCustomerById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryCustomerById]
END
GO
CREATE PROCEDURE dbo.usp_QueryCustomerById
	@id INT

AS
	SELECT * FROM PERSON WHERE profile='S' AND (id LIKE @id )
	ORDER BY id
GO