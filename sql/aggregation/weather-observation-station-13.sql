select
    round(sum((case when lat_n > 38.780 and lat_n < 137.2345 then lat_n end)),4)
from station;
