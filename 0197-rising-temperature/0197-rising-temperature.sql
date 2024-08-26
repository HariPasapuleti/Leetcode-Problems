# Write your MySQL query statement below

select distinct a.id 
from weather a
join weather b on datediff (a.recordDate, b.recordDate) = 1
and a.temperature > b.temperature

