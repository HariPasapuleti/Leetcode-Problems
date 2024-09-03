# Write your MySQL query statement below

select 
    su.user_id, 
    round(avg(if(co.action='confirmed',1,0)),2) as confirmation_rate
from 
    signups as su
left join
    confirmations as co on
    su.user_id = co.user_id
group by
    su.user_id


