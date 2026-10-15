use startersql;



--for adding the constraint we ALTER TABLE table_name ADD Constraint constraint_name Constraint itself(column_name)
ALTER TABLE users ADD constraint unique_email UNIQUE(email);

-- Check constraint
ALTER TABLE users ADD CONSTRAINT chk_dob CHECK(date_of_birth > '1920-01-01');
	
    