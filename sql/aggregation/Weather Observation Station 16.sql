-- Query the smallest Northern Latitude (LAT_N) from STATION that is greater than 38.7780 .
-- Round your answer to 4 decimal places.

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT ROUND(MIN(LAT_N),4)
FROM STATION
WHERE LAT_N > 38.7780;
