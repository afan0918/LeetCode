# Write your MySQL query statement below
delete from Person where id not in( 
    select data.id from (
        select min(id) as id from Person group by email
    ) data
)