# Write your MySQL query statement below

select P.firstName, P.lastName, A.city, a.state
from Person P left join address A
on P.personId = A.personId

