 use startersql;
 
 
 -- Only choosing some specific column to show
 select * from users where date_of_birth <'1995-09-09';
 select * from users where date_of_birht is not NULL;


-- between earlier and the late date
 SELECT * FROM users
 WHERE date_of_birth BETWEEN '1985-09-09' AND '1990-09-23';

-- using in keywords 
 select * from users where gender in ('male','female');

-- using or keyword (if this or if this not than that shol be true for the display)
 select * from users where gender =  'Male' OR salary > '60000'; 


-- using the order by (here i am using order by to arranging the data in asending order using ASC keyword using the Date_of_birth)
-- desc can be used as well for arranging the data in descending order
-- LIMIT - used when we need top n rows we can just write LIMIT n in front of the query
 select * from users where gender = 'male' OR salary > '65000' ORDER BY date_of_birth ASC LIMTI 5; 
 