# Write your MySQL query statement below
select e1.reports_to as employee_id, 
e2.name as name, 
count(*) as reports_count, 
round(sum(e1.age)/count(*)) as average_age
from employees as e1
left outer join employees as e2
on e1.reports_to=e2.employee_id
where e1.reports_to is not null
group by employee_id
order by employee_id