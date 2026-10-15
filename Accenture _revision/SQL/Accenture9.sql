---\


Select d.DEPT_NMAE,e.Name,e.salary from department JOIN Employee1
ON d.dept_id = e.dept_id 
WHERE salary = (select MAX(e.SALARY)  FROM employee e where e2.Dept_ID = e.dept_id )

