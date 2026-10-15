


-- using the stored procedure

USE startersql;
-- CREATING A PRODCEDURE
DELIMITER $$ -- changing delimiter to $$ 
create procedure select_users()
BEGIN
select * from users;
END $$  
DELIMITER ; -- changing delimiter to normal ';'

-- CALLING THE procedure

CALL select_users();

