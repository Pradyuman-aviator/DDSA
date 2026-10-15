
-- this one for the inner join  (overllaping ones)
SELECT users.name,address,city from users INNER JOIN address ON users.id = address.user_id;
-- for right join

SELECT users.name,address.city from users RIGHT JOIN address ON users.id = address.user_id;

-- for left join
SELECT users.name,address.city from users LEFT JOIN address ON users.id = address.user_id;