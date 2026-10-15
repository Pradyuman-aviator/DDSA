use startersql;

-- GROUP BY and Having clause

Select gender,AVG(salary) AS avg_salary from users 
group by gender
HAVING avg(salary)>60000;


select reffered_by_id,count(*) AS total_referred
from users
where reffered_by_id is not null
group by reffered_by_id
having count(*) > 1;

-- Using ROLLUP it avg of avg and count of count 

select gender,AVG(salary) as avg_salary,count(*) as Count from users group by gender with rollup;