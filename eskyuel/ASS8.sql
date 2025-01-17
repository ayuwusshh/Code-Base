-- Consider the following relations run the following SQL queries : 

-- Doctor(SSN, FirstName, LastName, Specialty, YearsOfExperience, PhoneNum) 
-- Patient(SSN, FirstName, LastName, Address, DOB, PrimaryDoctor_SSN) 
-- Medicine(TradeName, UnitPrice, GenericFlag)
-- Prescription(Id, Date, Doctor_SSN, Patient_SSN)
-- Prescription_Medicine(Prescription Id, TradeName, NumOfUnits)

--list the ssn of distinct patients who have aspirin prescribed to them by a doctor named John SMith
select distinct p.patient_ssn
  from prescription p
  join prescription_medicine pm
on p.id = pm.prescriptionid
  join doctor d
on p.doctor_ssn = d.ssn
 where d.firstname = 'John'
   and d.lastname = 'Smith'
   and pm.tradename = 'Aspirin';

create table doctorr (
   ssn               number(5) primary key,
   firstname         varchar2(20) not null,
   lastname          varchar2(20) not null,
   specialty         varchar2(20),
   yearsofexperience number(2),
   phonenum          varchar2(15)
);

create table patientt (
   ssn               number(5) primary key,
   firstname         varchar2(20) not null,
   lastname          varchar2(20) not null,
   address           varchar2(50) not null,
   dob               date not null,
   primarydoctor_ssn number(5)
      references doctor ( ssn )
         on delete cascade
);

create table medicine (
   tradename   varchar2(20) primary key,
   unitprice   number(10,2) not null,
   genericflag varchar2(10)
);
create table prescription (
   id          number primary key,
   pr_date     date not null,
   doctor_ssn  number(5)
      references doctor ( ssn )
         on delete cascade,
   patient_ssn number(5)
      references patient ( ssn )
         on delete cascade
);
create table prescription_medicine (
   prescriptionid number
      references prescription ( id )
         on delete cascade,
   tradename      varchar2(20)
      references medicine ( tradename )
         on delete cascade,
   numofunits     number
);
--list the ssn of patiets who has both aspirin and vitamin trade names in one prescription
select p.ssn
  from patientt p
  join prescription prr
on prr.patient_ssn = p.ssn
  join prescription_medicine pm
on pm.prescriptionid = prr.id
 where pm.tradename in ( 'Aspirin',
                         'Vitamin' )
 group by p.ssn,
          prr.id
having count(distinct pm.tradename) = 2;
-- for medicine written in more than 20 prescription, report the trade name and the total number of units prescribed
select tradename,
       sum(numofunits)
  from prescription_medicine
 group by tradename
having sum(numofunits) > 20;
commit;
select *
  from doctorr;
insert into doctorr (
   ssn,
   firstname,
   lastname,
   specialty,
   yearsofexperience,
   phonenum
) values ( 10001,
           'John',
           'Smith',
           'Cardiology',
           15,
           '555-1234' );

insert into doctorr (
   ssn,
   firstname,
   lastname,
   specialty,
   yearsofexperience,
   phonenum
) values ( 10002,
           'Emily',
           'Davis',
           'Neurology',
           10,
           '555-5678' );

insert into doctorr (
   ssn,
   firstname,
   lastname,
   specialty,
   yearsofexperience,
   phonenum
) values ( 10003,
           'Michael',
           'Johnson',
           'Pediatrics',
           8,
           '555-7890' );

insert into doctorr (
   ssn,
   firstname,
   lastname,
   specialty,
   yearsofexperience,
   phonenum
) values ( 10004,
           'Randy',
           'Khan',
           'Pediatrics',
           8,
           '555-7890' );

insert into patientt (
   ssn,
   firstname,
   lastname,
   address,
   dob,
   primarydoctor_ssn
) values ( 20001,
           'David',
           'Wilson',
           '123 Maple St',
           to_date('1980-07-12','YYYY-MM-DD'),
           10001 );

insert into patientt (
   ssn,
   firstname,
   lastname,
   address,
   dob,
   primarydoctor_ssn
) values ( 20002,
           'Sarah',
           'Taylor',
           '456 Oak St',
           to_date('1992-03-23','YYYY-MM-DD'),
           10001 );

insert into patientt (
   ssn,
   firstname,
   lastname,
   address,
   dob,
   primarydoctor_ssn
) values ( 20003,
           'Jessica',
           'Brown',
           '789 Pine St',
           to_date('1985-11-30','YYYY-MM-DD'),
           10002 );

insert into patientt (
   ssn,
   firstname,
   lastname,
   address,
   dob,
   primarydoctor_ssn
) values ( 20004,
           'Daniel',
           'Lee',
           '101 Birch St',
           to_date('1990-05-22','YYYY-MM-DD'),
           10003 );


insert into medicine (
   tradename,
   unitprice,
   genericflag
) values ( 'Aspirin',
           30.00,
           'Yes' );

insert into medicine (
   tradename,
   unitprice,
   genericflag
) values ( 'Vitamin',
           45.00,
           'Yes' );

insert into medicine (
   tradename,
   unitprice,
   genericflag
) values ( 'Amoxicillin',
           80.00,
           'No' );

insert into medicine (
   tradename,
   unitprice,
   genericflag
) values ( 'Ibuprofen',
           25.00,
           'Yes' );

select distinct p.patient_ssn
  from prescription p
  join prescription_medicine pm
on p.id = pm.prescriptionid
  join doctor d
on p.doctor_ssn = d.ssn
 where d.firstname = 'John'
   and d.lastname = 'Smith';


insert into prescription (
   id,
   pr_date,
   doctor_ssn,
   patient_ssn
) values ( 30001,
           to_date('2024-10-01','YYYY-MM-DD'),
           10001,
           20001 );

insert into prescription (
   id,
   pr_date,
   doctor_ssn,
   patient_ssn
) values ( 30002,
           to_date('2024-10-02','YYYY-MM-DD'),
           10001,
           20002 );

insert into prescription (
   id,
   pr_date,
   doctor_ssn,
   patient_ssn
) values ( 30003,
           to_date('2024-10-03','YYYY-MM-DD'),
           10002,
           20003 );

insert into prescription (
   id,
   pr_date,
   doctor_ssn,
   patient_ssn
) values ( 30004,
           to_date('2024-10-04','YYYY-MM-DD'),
           10003,
           20004 );


insert into prescription_medicine (
   prescriptionid,
   tradename,
   numofunits
) values ( 30001,
           'Aspirin',
           10 );

insert into prescription_medicine (
   prescriptionid,
   tradename,
   numofunits
) values ( 30001,
           'Vitamin',
           5 );

insert into prescription_medicine (
   prescriptionid,
   tradename,
   numofunits
) values ( 30002,
           'Aspirin',
           15 );

insert into prescription_medicine (
   prescriptionid,
   tradename,
   numofunits
) values ( 30003,
           'Amoxicillin',
           20 );

insert into prescription_medicine (
   prescriptionid,
   tradename,
   numofunits
) values ( 30004,
           'Ibuprofen',
           30 );

-- list the trade name of generic medicine with the unit price lesss than 50$
select tradename,
       unitprice
  from medicine
 where unitprice < 50
   and genericflag = 'Yes';
-- list the first and last names of patients whose primar+y doctor is named john smith
select p.firstname,
       p.lastname
  from patientt p
  join doctorr d
on p.primarydoctor_ssn = d.ssn
 where d.firstname = 'John'
   and d.lastname = 'Smith';
-- list the first and last name of the doctors who are not primary doctor to any patient
select firstname,
       lastname
  from doctorr
 where ssn not in (
   select primarydoctor_ssn
     from patientt
);


--list the ssn of distinct patients who have aspirin prescribed to them by a doctor named John SMith
 
-- list the first and ladt name of patient who have noprescriptions written by doctors other than their primary doctors

-- desc Doctor;

-- desc patient;

-- desc Medicine;

-- desc Prescription_Medicine;
-- desc Prescription;

-- select TradeName
-- from medicine
-- where GENERICFLAG='Yes' and UNITPRICE<50; 

select p.firstname,
       p.lastname
  from patient p
  join doctor d
on p.primarydoctor_ssn = d.ssn
 where d.firstname = 'John'
   and d.lastname = 'Smith';

-- select *from doctor;

-- SELECT FirstName,LastName
-- from DOCTOR
-- where SSN NOT IN (SELECT PrimaryDoctor_SSN from PATIENT);

-- SELECT TradeName,Sum(NumOfUnits)
-- from Prescription_Medicine
-- group BY TRADENAME
-- HAVING Sum(NumOfUnits)>20;

-- --  select P.PATIENT_SSN
-- --  from PRESCRIPTION P
-- -- WHERE ID=(SELECT )





-- SELECT P.FIRSTNAME,P.LASTNAME
-- from patient p
-- where not EXISTS(
--     select 1 from Prescription pr
--     where pr.Patient_SSN=p.SSN and pr.DOCTOR_SSN !=p.PRIMARYDOCTOR_SSN
-- );\
select sysdate
  from dual;