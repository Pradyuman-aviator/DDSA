USE startersql;

-- for adding a column and alteration of table stuff we use alter tablea table_name ADD COLUMN column_name table properties
 ALTER TABLE users ADD COLUMN is_active BOOLEAN DEFAULT true;

-- deleting a column iwht alter table
 ALTER TABLE users DROP is_active;

-- Modifying a row iwht hte help of alter table  
 ALTER TABLE users MODIFY name VARCHAR(100); 

--  modifying column sequence (AFTER) 
ALTER TABLE users MODIFY email varchar(100) AFTER id;

-- Take Date time to the first ( FIRST) 
ALTER TABLE users MODIFY date_of_birth DATETIME FIRST;

