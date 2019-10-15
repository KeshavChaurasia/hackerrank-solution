-- Query the greatest value of the Northern Latitudes (LAT_N) from STATION that is less than . Truncate your answer to 4 decimal places.
/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT ROUND(MAX(LAT_N),4)
FROM  STATION
WHERE LAT_N < 137.2345;
