
-- Consider the following relations run the following SQL queries : 

-- Doctor(SSN, FirstName, LastName, Specialty, YearsOfExperience, PhoneNum) 
-- Patient(SSN, FirstName, LastName, Address, DOB, PrimaryDoctor_SSN) 
-- Medicine(TradeName, UnitPrice, GenericFlag)
-- Prescription(Id, Date, Doctor_SSN, Patient_SSN)
-- Prescription_Medicine(Prescription Id, TradeName, NumOfUnits)


Create Table Doctorr(
    SSN Number(5) PRIMARY KEY,
    FirstName VARCHAR2(20) NOT NULL,
    LastName VARCHAR2(20) NOT NULL,
    Specialty VARCHAR2(20) ,
    YearsOfExperience Number(2) ,
    PhoneNum VARCHAR2(15)
);
Create Table Patientt(
    SSN Number(5) PRIMARY KEY,
    FirstName VARCHAR2(20) NOT NULL,
    LastName VARCHAR2(20) NOT NULL,
    Address VARCHAR2(50) NOT NULL,
    DOB DATE NOT NULL,
    PrimaryDoctor_SSN Number(5) references Doctor(SSN) on DELETE Cascade
);

Create TABLE Medicine(
    TradeName VARCHAR2(20) PRIMARY KEY,
    UnitPrice Number(10,2) NOT NULL,
    GenericFlag VARCHAR2(10) 
);

create table Prescription(
    Id NUMBER PRIMARY KEY,
    Pr_Date DATE NOT NULL,
    Doctor_SSN NUMBER(5) references Doctor(SSN) on DELETE Cascade,
    Patient_SSN NUMBER(5) references Patient(SSN) on DELETE Cascade
);

create table Prescription_Medicine(
    PrescriptionId NUMBER references Prescription(Id) on DELETE Cascade,
    TradeName VARCHAR2(20) references Medicine(TradeName) on DELETE Cascade,
    NumOfUnits NUMBER
);

Commit;

INSERT INTO Doctor (SSN, FirstName, LastName, Specialty, YearsOfExperience, PhoneNum)
VALUES (10001, 'John', 'Smith', 'Cardiology', 15, '555-1234');

INSERT INTO Doctor (SSN, FirstName, LastName, Specialty, YearsOfExperience, PhoneNum)
VALUES (10002, 'Emily', 'Davis', 'Neurology', 10, '555-5678');

INSERT INTO Doctor (SSN, FirstName, LastName, Specialty, YearsOfExperience, PhoneNum)
VALUES (10003, 'Michael', 'Johnson', 'Pediatrics', 8, '555-7890');

INSERT INTO Doctor (SSN, FirstName, LastName, Specialty, YearsOfExperience, PhoneNum)
VALUES (1000, 'Randy', 'Khan', 'Pediatrics', 8, '555-7890');

INSERT INTO Patient (SSN, FirstName, LastName, Address, DOB, PrimaryDoctor_SSN)
VALUES (20001, 'David', 'Wilson', '123 Maple St', TO_DATE('1980-07-12', 'YYYY-MM-DD'), 10001);

INSERT INTO Patient (SSN, FirstName, LastName, Address, DOB, PrimaryDoctor_SSN)
VALUES (20002, 'Sarah', 'Taylor', '456 Oak St', TO_DATE('1992-03-23', 'YYYY-MM-DD'), 10001);

INSERT INTO Patient (SSN, FirstName, LastName, Address, DOB, PrimaryDoctor_SSN)
VALUES (20003, 'Jessica', 'Brown', '789 Pine St', TO_DATE('1985-11-30', 'YYYY-MM-DD'), 10002);

INSERT INTO Patient (SSN, FirstName, LastName, Address, DOB, PrimaryDoctor_SSN)
VALUES (20004, 'Daniel', 'Lee', '101 Birch St', TO_DATE('1990-05-22', 'YYYY-MM-DD'), 10003);


INSERT INTO Medicine (TradeName, UnitPrice, GenericFlag)
VALUES ('Aspirin', 30.00, 'Yes');

INSERT INTO Medicine (TradeName, UnitPrice, GenericFlag)
VALUES ('Vitamin', 45.00, 'Yes');

INSERT INTO Medicine (TradeName, UnitPrice, GenericFlag)
VALUES ('Amoxicillin', 80.00, 'No');

INSERT INTO Medicine (TradeName, UnitPrice, GenericFlag)
VALUES ('Ibuprofen', 25.00, 'Yes');

select DISTINCT P.PATIENT_SSN
from PRESCRIPTION P
join PRESCRIPTION_MEDICINE pm on P.ID=pm.PRESCRIPTIONID
join DOCTOR d on p.Doctor_SSN=d.SSN
where d.FIRSTNAME ='John' and d.LASTNAME ='Smith';


INSERT INTO Prescription (Id, Pr_Date, Doctor_SSN, Patient_SSN)
VALUES (30001, TO_DATE('2024-10-01', 'YYYY-MM-DD'), 10001, 20001);

INSERT INTO Prescription (Id, Pr_Date, Doctor_SSN, Patient_SSN)
VALUES (30002, TO_DATE('2024-10-02', 'YYYY-MM-DD'), 10001, 20002);

INSERT INTO Prescription (Id, Pr_Date, Doctor_SSN, Patient_SSN)
VALUES (30003, TO_DATE('2024-10-03', 'YYYY-MM-DD'), 10002, 20003);

INSERT INTO Prescription (Id, Pr_Date, Doctor_SSN, Patient_SSN)
VALUES (30004, TO_DATE('2024-10-04', 'YYYY-MM-DD'), 10003, 20004);


INSERT INTO Prescription_Medicine (PrescriptionId, TradeName, NumOfUnits)
VALUES (30001, 'Aspirin', 10);

INSERT INTO Prescription_Medicine (PrescriptionId, TradeName, NumOfUnits)
VALUES (30001, 'Vitamin', 5);

INSERT INTO Prescription_Medicine (PrescriptionId, TradeName, NumOfUnits)
VALUES (30002, 'Aspirin', 15);

INSERT INTO Prescription_Medicine (PrescriptionId, TradeName, NumOfUnits)
VALUES (30003, 'Amoxicillin', 20);

INSERT INTO Prescription_Medicine (PrescriptionId, TradeName, NumOfUnits)
VALUES (30004, 'Ibuprofen', 30);

desc Doctor;

desc patient;

desc Medicine;

desc Prescription_Medicine;
desc Prescription;

select TradeName
from medicine
where GENERICFLAG='Yes' and UNITPRICE<50; 

select P.FirstName,P.LastName 
from PATIENT P
join DOCTOR D on P.PRIMARYDOCTOR_SSN=D.SSN
where D.FIRSTNAME='John' and D.LASTNAME='Smith';

select *from doctor;

SELECT FirstName,LastName
from DOCTOR
where SSN NOT IN (SELECT PrimaryDoctor_SSN from PATIENT);

SELECT TradeName,Sum(NumOfUnits)
from Prescription_Medicine
group BY TRADENAME
HAVING Sum(NumOfUnits)>20;

--  select P.PATIENT_SSN
--  from PRESCRIPTION P
-- WHERE ID=(SELECT )

select DISTINCT P.PATIENT_SSN
from PRESCRIPTION P
join PRESCRIPTION_MEDICINE pm on P.ID=pm.PRESCRIPTIONID
join DOCTOR d on p.Doctor_SSN=d.SSN
where d.FIRSTNAME ='John' and d.LASTNAME ='Smith';

SELECT P.FIRSTNAME,P.LASTNAME
from patient p
join PRESCRIPTION pr on p.SSN = pr.PATIENT_SSN 
where pr.DOCTOR_SSN in (SELECT PRIMARYDOCTOR_SSN from PATIENT);

SELECT P.FIRSTNAME,P.LASTNAME
from patient p
where not EXISTS(
    select 1 from Prescription pr
    where pr.Patient_SSN=p.SSN and pr.DOCTOR_SSN !=p.PRIMARYDOCTOR_SSN
) ;

COMMIT;
