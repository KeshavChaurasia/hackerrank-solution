/*
Consider p1(a,c) and p2(b,d) to be two points on a 2D plane where (a,b) are the respective
minimum and maximum values of Northern Latitude (LAT_N)
and (c,d) are the respective minimum and maximum values of Western Longitude (LONG_W) in STATION.

Query the Euclidean Distance between points
and and format your answer to display decimal digits.


*/

SELECT ROUND(SQRT(POWER(a-b,2)+POWER(c-d,2)),4)
FROM
    (SELECT
        MIN(LAT_N) AS a,
        MAX(LAT_N) AS c,
        MIN(LONG_W) AS b,
        MAX(LONG_W) AS d
    FROM
        STATION)
