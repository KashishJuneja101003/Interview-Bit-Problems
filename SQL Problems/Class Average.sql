SELECT COUNT(*) AS A
FROM Students
WHERE Marks > (
    SELECT AVG(Marks) FROM Students
)
GROUP BY ClassId
ORDER BY ClassId;
