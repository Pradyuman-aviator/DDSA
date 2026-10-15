
CREATE TABLE users (
id INT auto_increment primary key,
name varchar(100) NOT NULL,
email varchar(100) UNIQUE NOT NULL,
gender enum('female','male','other'),
date_of_birth date,
created_at TIMESTAMP DEFAULT current_timestamp


)
