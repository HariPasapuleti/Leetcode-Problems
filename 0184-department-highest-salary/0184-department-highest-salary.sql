# Write your MySQL query statement below

select 
    d.name as department, e.name as employee, e.salary as salary
from
    employee as e
join
    department as d
where
    e.departmentid=d.id and (e.departmentid, salary) in (
        select 
            departmentid,max(salary) 
        from 
            employee
        group by
            departmentid
    )


