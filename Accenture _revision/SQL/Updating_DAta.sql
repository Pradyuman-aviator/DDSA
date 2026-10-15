use startersql;




-- Update - > used to updating the data of the table and set used for the specific columns (always used with where otherwise all the data will become same)
UPDATE users SET salary = '45000' where id = '1';

-- increasing the salary of the peeps by 10000 where salary is less than 60000
UPDATE users SET salary = salary + 10000 where salary < '60000';		 

-- set the gender of ishan to the other(not gonna run now as i am in safe mode we have to change any priary key to just use this lol )
 UPDATE users SET gender = 'Other' WHERE  name = 'Ishaan';


select * from users;