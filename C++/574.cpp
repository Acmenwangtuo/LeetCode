__________________________________________________________________________________________________
select c.name
from candidate c, 
(select candidate
from vote
group by candidate
order by count(candidate) desc
limit 1) v
where c.id = v.candidate;
__________________________________________________________________________________________________

__________________________________________________________________________________________________
