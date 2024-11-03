CREATE TABLE Teams (
    team_id INT PRIMARY KEY,
    team_name VARCHAR(100),
    city VARCHAR(50)
);
INSERT INTO Teams VALUES (1, 'City FC', 'New York');
INSERT INTO Teams VALUES (2, 'United Stars', 'Los Angeles');
INSERT INTO Teams VALUES (3, 'Riverside Rovers', 'Chicago');
INSERT INTO Teams VALUES (4, 'Coastal Kickers', 'Miami');

CREATE TABLE Players (
    player_id INT PRIMARY KEY,
    player_name VARCHAR(100),
    age INT,
    position VARCHAR(50),
    team_id INT,
    FOREIGN KEY (team_id) REFERENCES Teams(team_id)
);
INSERT INTO Players VALUES (1, 'John Doe', 28, 'Forward', 1);
INSERT INTO Players VALUES (2, 'Mike Smith', 24, 'Midfielder', 1);
INSERT INTO Players VALUES (3, 'Sam Lee', 30, 'Defender', 1);
INSERT INTO Players VALUES (4, 'Tom Brown', 22, 'Goalkeeper', 2);
INSERT INTO Players VALUES (5, 'Alex White', 27, 'Forward', 2);
INSERT INTO Players VALUES (6, 'Jake Black', 23, 'Midfielder', 3);
INSERT INTO Players VALUES (7, 'Luke Green', 25, 'Defender', 4);
INSERT INTO Players VALUES (8, 'Chris Blue', 26, 'Forward', 4);

CREATE TABLE Matches (
    match_id INT PRIMARY KEY,
    team1_id INT,
    team2_id INT,
    match_date DATE,
    team1_score INT,
    team2_score INT,
    FOREIGN KEY (team1_id) REFERENCES Teams(team_id),
    FOREIGN KEY (team2_id) REFERENCES Teams(team_id)
);
INSERT INTO Matches VALUES (1, 1, 2, '10/10/24', 2, 1);
INSERT INTO Matches VALUES (2, 3, 4, '11/10/24', 3, 3);
INSERT INTO Matches VALUES (3, 1, 3, '15/10/24', 1, 0);
INSERT INTO Matches VALUES (4, 2, 4, '18/10/24', 2, 4);

CREATE TABLE Goals (
    goal_id INT PRIMARY KEY,
    player_id INT,
    match_id INT,
    minute_scored INT,
    FOREIGN KEY (player_id) REFERENCES Players(player_id),
    FOREIGN KEY (match_id) REFERENCES Matches(match_id)
);
INSERT INTO Goals VALUES (1, 1, 1, 15);
INSERT INTO Goals VALUES (2, 5, 1, 60);
INSERT INTO Goals VALUES (3, 6, 2, 22);
INSERT INTO Goals VALUES (4, 8, 2, 76);
INSERT INTO Goals VALUES (5, 1, 3, 30);
INSERT INTO Goals VALUES (6, 7, 4, 12);

CREATE TABLE Coaches (
    coach_id INT PRIMARY KEY,
    coach_name VARCHAR(100),
    team_id INT,
    experience_years INT,
    FOREIGN KEY (team_id) REFERENCES Teams(team_id)
);
INSERT INTO Coaches VALUES (1, 'Coach Carter', 1, 15);
INSERT INTO Coaches VALUES (2, 'Coach Taylor', 2, 10);
INSERT INTO Coaches VALUES (3, 'Coach Morgan', 3, 8);
INSERT INTO Coaches VALUES (4, 'Coach Young', 4, 5);

CREATE TABLE Injuries (
    injury_id INT PRIMARY KEY,
    player_id INT,
    injury_date DATE,
    injury_type VARCHAR(100),
    recovery_time_days INT,
    FOREIGN KEY (player_id) REFERENCES Players(player_id)
);
INSERT INTO Injuries VALUES (1, 2, '12/10/24', 'Hamstring Pull', 14);
INSERT INTO Injuries VALUES (2, 6, '14/10/24', 'Sprained Ankle', 10);
INSERT INTO Injuries VALUES (3, 3, '15/10/24', 'Concussion', 7);
INSERT INTO Injuries VALUES (4, 7, '18/10/24', 'Fractured Wrist', 21);

--Find the names of all players and their positions in the team "City FC".

select player_name as p,position as pos
from PLAYERS p
JOIN TEAMS t on t.team_id=p.TEAM_ID
where t.TEAM_NAME='City FC';

--Find the total number of goals scored by each player. List the player names along with their total goals.

SELECT p.PLAYER_NAME,count(distinct g.GOAL_ID) as total_goals
from PLAYERS p
join  GOALS g on p.player_id=g.player_id
GROUP BY p.PLAYER_NAME;

--List the names of players along with their team names who scored in matches held on or after October 15, 2024.

SELECT p.player_name,t.team_name
from PLAYERS p
JOIN TEAMS t on t.TEAM_ID=p.TEAM_ID
JOIN GOALS g on g.PLAYER_ID=p.PLAYER_ID
JOIN MATCHES m on m.match_id=g.MATCH_ID
where m.match_date>='15/10/24';

--Find the average age of players for each team. List the team names along with the average age of their players

SELECT t.team_name,AVG(p.age) as avg_age
from TEAMS t
JOIN  PLAYERS p on p.team_id=t.team_id
GROUP BY t.TEAM_NAME;

--List the names of players who are injured, along with the type of injury they have. Include the recovery time in days.

select p.player_name as name,i.injury_type as type,i.recovery_time_days as days
from PLAYERS p
JOIN INJURIES i on p.PLAYER_ID=i.PLAYER_ID;

--Find the coaches who have more than 10 years of experience. List their names along with the teams they coach
SELECT c.coach_name,t.team_name
from COACHES c
JOIN TEAMS t on t.team_id=c.team_id
where c.experience_years>=10;

