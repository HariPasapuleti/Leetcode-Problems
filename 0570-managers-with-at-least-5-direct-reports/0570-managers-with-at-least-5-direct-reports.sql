# Write your MySQL query statement below

select e2.name
from 
    employee as e1
join 
    employee as e2 on
    e1.managerId = e2.id
group by 
    e1.managerId
having 
    count(e1.managerId) >= 5
