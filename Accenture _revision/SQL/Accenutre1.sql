Select employee_id from SME GROUP BY year_of_experience HAVING years_of_experience > 8;


---  4 joinrs hell yeah
SELECT m.move_name, m.genre, u.user_name, r.rating
FROM movies m 
INNER JOIN watch_history w 
    ON m.movie_id = w.movie_id 
INNER JOIN users u 
    ON w.movie_id = u.users_id 
INNER JOIN ratings r 
    ON u.user_id = r.user_id
WHERE m.genre = 'Action' AND U.age >25 and r.ratings >=4.0 and w.watch_minutes > 60;




--- where use row level filter 
SELECT m.movie_id,
       m.movie_name,
       m.genre,
       SUM(w.watch_minutes) AS total_minutes_watched,
       COUNT(*) AS total_watches
FROM movies m
INNER JOIN watch_history w
    ON m.movie_id = w.movie_id
GROUP BY m.movie_id
HAVING genre IN ('ACTION','THRILLER')
   AND COUNT(*) > 5
   AND SUM(w.watch_minutes) > 500;