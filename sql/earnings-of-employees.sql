select max(months*salary), count(*)
from employee
where months*salary = (Select Max(Months*salary) from employee);
