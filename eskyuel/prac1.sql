create table students (
   student_id int primary key,
   name       varchar(50),
   age        int,
   grade      varchar(2)
);

create table courses (
   course_id   int primary key,
   course_name varchar(50),
   teacher     varchar(50)
);

create table enrollment (
   enrollment_id int primary key,
   student_id    int,
   course_id     int,
   foreign key ( student_id )
      references students ( student_id ),
   foreign key ( course_id )
      references courses ( course_id )
);

desc Courses;

   desc Students;
   desc Enrollment;
select * from COURSES;

select name,
       grade
  from students;

select course_name,
       teacher
  from courses;

select name,
       age
  from students
 where age = 15;

select distinct grade
  from students;

-- Find the names of students enrolled in the "Mathematics" course.
  select s.name
  from STUDENTS s
  JOIN ENROLLMENT e on e.student_id=s.student_id
  JOIN COURSES c on c.course_id=e.course_id
  where c.course_name='Mathematics';

--Count the number of students in each grade.

SELECT grade, COUNT(student_id) as total_count
from STUDENTS
GROUP BY GRADE;

--List all students and their enrolled courses.

SELECT s.name as student,c.course_name
from STUDENTS s
join ENROLLMENT e on e.STUDENT_ID=s.STUDENT_ID
join COURSES c on c.COURSE_ID=e.COURSE_ID;

--Display courses with more than one student enrolled.
SELECT c.course_name, COUNT(e.student_id) as student_count
FROM COURSES c
JOIN  ENROLLMENT e on c.course_id=e.course_id
GROUP BY  c.course_name
having  COUNT(e.student_id)>1;

--Find the average age of students enrolled in each course.

SELECT c.course_name,AVG(s.age) as avg_age
FROM STUDENTS s
JOIN ENROLLMENT e on e.student_id=s.student_id
join COURSES c on c.COURSE_ID=e.COURSE_ID
GROUP BY c.course_name;

SELECT * FROM STUDENTS;
select * from COURSES;
SELECT * from ENROLLMENT;

--List students who are not enrolled in any courses.

SELECT name
FROM Students
WHERE student_id NOT IN (SELECT student_id FROM Enrollment);

--Retrieve the names of students along with their teachers, if enrolled in any course.

SELECT s.name as student_name,c.teacher as teacher_name
FROM STUDENTS s
JOIN ENROLLMENT e on e.student_id=s.student_id
JOIN COURSES c on c.course_id=e.course_id;

--Find students who are enrolled in both "Mathematics" and "Science".

SELECT s.name
from STUDENTS s
join ENROLLMENT e1 on s.student_id= e1.student_id
join COURSES c1 on e1.course_id=c1.course_id
join ENROLLMENT e2 on s.student_id=e2.student_id
join COURSES c2 on e2.course_id= c2.course_id
where  c1.course_name='Mathematics' and c2.course_name='Science';


SELECT s.name
FROM Students s
JOIN Enrollment e1 ON s.student_id = e1.student_id
JOIN Courses c1 ON e1.course_id = c1.course_id
JOIN Enrollment e2 ON s.student_id = e2.student_id
JOIN Courses c2 ON e2.course_id = c2.course_id
WHERE c1.course_name = 'Mathematics' AND c2.course_name = 'Science';
