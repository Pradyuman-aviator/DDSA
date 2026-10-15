-- Nested Queries/Sub-Queires
-- here we are using the subqueires
Select id,name,reffered_by_id from users where reffered_by_id IN (SELECT id from users where salary >70000);

-- let's say we have to disply the name,salary and along AVG SALARY 

select name,salary,(SELECT AVG(salary) from users) from users;