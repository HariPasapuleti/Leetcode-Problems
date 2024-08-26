# Write your MySQL query statement below

select pr.product_id, 
    case 
        when round(sum(un.units*pr.price)/sum(un.units), 2) is not null
        then round(sum(un.units*pr.price)/sum(un.units), 2)
        else 0
    end as average_price
from 
    prices as pr
left join 
    unitssold as un on un.product_id = pr.product_id
where 
    un.purchase_date between pr.start_date and pr.end_date or un.purchase_date is null
group by 
    pr.product_id;


