# Write your MySQL query statement below


select customer_id
from customer as cust
group by customer_id
having count(distinct product_key) = (select count(product_key) from product)

