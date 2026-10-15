USE startersql;

-- NOW insert stuff

-- INSERT INTO users VALUES
 -- ('2017-07-13','1','Pradyuman','Hello@gmail.com','male',	DEFAULT);

-- insert into if we need to changed only some of the columms or my way so i can do it in this way
INSERT INTO users (name, email, gender, date_of_birth) VALUES
('Pradyumanhs1','pradyuman1@gmail.com','male','2018-09-23'),
-- ('Pradyumanhs2','pradyuman2@gmail.com','male','2018-08-23'),
('Pradyumanhs3','pradyuman3@gmail.com','male','2018-11-23'),
('Pradyumanhs4','pradyuman4@gmail.com','male','2018-10-23');


select * from users;



 