# Write your MySQL query statement below

select 
    Department, Employee, salary
from
    (
        select 
            d.name as Department, e.name as Employee, salary, d.id as id,
            Dense_rank() over(partition by d.id order by salary desc) as r
        from
            employee as e
        join
            department as d on
            e.departmentId = d.id

    ) as p
where
    r <= 3


