----- here we gonna leanr the union stuff

SELECT name from users;
UNION  -- it does'nt shjow the repeated one 
SELECT name from admin_users;


SELECT name from users;
UNION ALL -- it also show the repeated value 
SELEct name from address;