# Write your MySQL query statement below
-- Select distinct p1.email as Email
-- from Person p1
-- where (select count(email)
--     from Person p2
--     where p1.email=p2.email
-- ) > 1;

select email as Email
from Person
group by email
having count(email)>1
