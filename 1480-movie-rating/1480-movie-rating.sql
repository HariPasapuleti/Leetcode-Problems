# Write your MySQL query statement below


(
    select 
        name as results
    from 
        movierating as mr
    left join
        users as u
        on mr.user_id = u.user_id
    group by
        mr.user_id
    order by
        count(mr.user_id) desc, name
    limit 1
)
union all
(
    select 
        title as results
    from
        movierating as mr
    join
        movies as m
        on m.movie_id=mr.movie_id
    where
        mr.created_at like '2020-02-%'
    group by 
        mr.movie_id
    order by 
        avg(mr.rating) desc, title
    limit 1
)


-- select 
--     avg(s.rating) as rating, title, name
-- from
--     (
--         select 
--             *
--         from    
--             movierating as mr
--         where
--             created_at between '2020-02-01' and '2020-02-29'
--     ) as s
-- join
--     movies as m on m.movie_id=s.movie_id
-- join
--     users as u on u.user_id = s.user_id
-- group by
--     s.movie_id
-- order by
--     rating desc, title
-- limit 1



