CREATE TABLE Doctors (

    doctor_id INT PRIMARY KEY,
    name VARCHAR(100),
    specialty VARCHAR(100),
    department_id INT,
    experience_years INT
);
CREATE TABLE Patients (
    patient_id INT PRIMARY KEY,
    name VARCHAR(100),
    age INT,
    gender VARCHAR(10),
    admitted_date DATE
);
CREATE TABLE Department (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100),
    floor INT
);
CREATE TABLE Appointments (
    appointment_id INT PRIMARY KEY,
    patient_id INT,
    doctor_id INT,
    appointment_date DATE,
    reason VARCHAR(255),
    FOREIGN KEY (patient_id) REFERENCES Patients(patient_id),
    FOREIGN KEY (doctor_id) REFERENCES Doctors(doctor_id)
);
CREATE TABLE Medications (
    medication_id INT PRIMARY KEY,
    medication_name VARCHAR(100),
    dosage VARCHAR(50),
    side_effects VARCHAR(255)
);
CREATE TABLE Prescriptions (
    prescription_id INT PRIMARY KEY,
    patient_id INT,
    doctor_id INT,
    medication_id INT,
    date_prescribed DATE,
    FOREIGN KEY (patient_id) REFERENCES Patients(patient_id),
    FOREIGN KEY (doctor_id) REFERENCES Doctors(doctor_id),
    FOREIGN KEY (medication_id) REFERENCES Medications(medication_id)
);
INSERT INTO Department VALUES (1, 'Cardiology', 2);
INSERT INTO Department VALUES (2, 'Neurology', 3);
INSERT INTO Department VALUES (3, 'Orthopedics', 4);
INSERT INTO Department VALUES (4, 'Pediatrics', 1);

INSERT INTO Doctors VALUES (1, 'Dr. Alice Smith', 'Cardiologist', 1, 10);
INSERT INTO Doctors VALUES (2, 'Dr. Bob Johnson', 'Neurologist', 2, 8);
INSERT INTO Doctors VALUES (3, 'Dr. Charlie Brown', 'Orthopedic Surgeon', 3, 15);
INSERT INTO Doctors VALUES (4, 'Dr. Diana Prince', 'Pediatrician', 4, 5);

INSERT INTO Patients VALUES (1, 'John Doe', 45, 'Male', '15/09/23');
INSERT INTO Patients VALUES (2, 'Jane Roe', 38, 'Female', '18/09/23');
INSERT INTO Patients VALUES (3, 'Jim Beam', 65, 'Male', '02/10/23');
INSERT INTO Patients VALUES (4, 'Emily Stone', 5, 'Female', '05/10/23');

INSERT INTO Appointments VALUES (1, 1, 1, '16/09/23', 'Heart check-up');
INSERT INTO Appointments VALUES (2, 2, 2, '20/09/23', 'Migraine evaluation');
INSERT INTO Appointments VALUES (3, 3, 3, '03/10/23', 'Knee pain');
INSERT INTO Appointments VALUES (4, 4, 4, '06/10/23', 'Routine child check-up');


INSERT INTO Medications VALUES (1, 'Atorvastatin', '10mg', 'Nausea, Headache');
INSERT INTO Medications VALUES (2, 'Metformin', '500mg', 'Diarrhea, Nausea');
INSERT INTO Medications VALUES (3, 'Ibuprofen', '200mg', 'Stomach pain, Dizziness');
INSERT INTO Medications VALUES (4, 'Amoxicillin', '250mg', 'Allergic reactions');

INSERT INTO Prescriptions VALUES (1, 1, 1, 1, '16/09/23');
INSERT INTO Prescriptions VALUES (2, 2, 2, 2, '20/09/23');
INSERT INTO Prescriptions VALUES (3, 3, 3, 3, '03/10/23');
INSERT INTO Prescriptions VALUES (4, 4, 4, 4, '06/10/23');

--List all departments and their floors.

SELECT department_name,floor
from DEPARTMENT;

--Get the names and specialties of all doctors.

SELECT name as doctor, specialty
from DOCTORS;

--Find the details of all patients admitted after September 2023

SELECT * from PATIENTS
where admitted_date > '30/09/23';

--Get the list of medications with their side effects.

SELECT medication_name,side_effects
from MEDICATIONS
GROUP BY medication_name,SIDE_EFFECTS;

--Show all appointments scheduled on or after October 1, 2023.
SELECT *
from APPOINTMENTS
WHERE APPOINTMENT_DATE>='01/10/23' ;

--Find doctors with more than 5 years of experience.

SELECT name, specialty 
FROM Doctors
 WHERE experience_years > 5;

--Get the total number of patients assigned to each doctor

SELECT doctor_id, COUNT(patient_id) as patient_count
from APPOINTMENTS
GROUP by DOCTOR_ID;

--Find the patients who have been prescribed Ibuprofen.

select p.name from PATIENTS p
JOIN PRESCRIPTIONS pr on pr.patient_id=p.patient_id
JOIN MEDICATIONS m on m.MEDICATION_ID=pr.medication_id
where  m.medication_name='Ibuprofen';

--Get the average age of patients by gender.

SELECT gender,AVG(age) as hisab_kitaab
from PATIENTS
GROUP BY GENDER;

--List all medications prescribed by Dr. Diana Prince.

SELECT m.medication_name from MEDICATIONS m
join PRESCRIPTIONS pr on pr.MEDICATION_ID=m.MEDICATION_ID
join DOCTORS d on d.DOCTOR_ID=pr.DOCTOR_ID
where d.name ='Dr. Diana Prince';

--List patients who had appointments for "Knee pain".

SELECT p.name from PATIENTS p 
JOIN Appointments a on p.patient_id=a.patient_id
where a.reason='Knee pain';

--Find doctors who prescribed more than one type of medication

select doctor_id from PRESCRIPTIONS
GROUP BY doctor_id
HAVING COUNT(distinct medication_id)>1;

SELECT d.department_name,count(a.appointment_id) as total_appointments from DEPARTMENT d
join DOCTORS doc on d.DEPARTMENT_ID=doc.DEPARTMENT_ID
join APPOINTMENTS a on doc.DOCTOR_ID=a.DOCTOR_ID
GROUP by d.DEPARTMENT_NAME;


SELECT p.name as patient_name, d.name as doctor_name
FROM PATIENTS p
JOIN APPOINTMENTS a on a.patient_id=p.patient_id
JOIN DOCTORS d on d.DOCTOR_ID=a.doctor_id
where a.APPOINTMENT_DATE >'30/09/23';