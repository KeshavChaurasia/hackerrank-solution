select n,
    (case
        when p is null then 'Root'
        when n in (select distinct p from bst) then 'Inner'
        else 'Leaf'
    end)t
from bst
order by n;
