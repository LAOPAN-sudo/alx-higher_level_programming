-- List all records with a score >= 10, ordering by score (top score first)
SELECT score, name FROM second_table
WHERE score >= 10
ORDER BY score DESC;
