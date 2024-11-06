CREATE table employee(
  SSN VARCHAR2(5) primary KEY not null,
  fName VARCHAR2(30),
  lName VARCHAR2(30),
  Address VARCHAR2(30),
  Sex VARCHAR2(10),
  Salary NUMBER(10,2) CHECK (Salary >0 ),
  upperSSN VARCHAR2(50),
  Dno INTEGER
);
insert into  employee values ('E101', 'John', 'Doe', '123 Main St', 'M',50000,'U101',1);
insert into  employee values ('E102', 'Dixy', 'Scott', '124 Main St', 'M',155000,'U102',2);
insert into  employee values ('E103', 'billie', 'stushy', '125 Main St', 'F',5000,'U103',3);
insert into  employee values ('E104', 'loda', 'kumar', '126 Main St', 'M',950000,'U101',4);
insert into  employee values ('E105', 'boor', 'kumar', '127 Main St', 'M',5600000,'U101',5);

create table department(
  Dno INTEGER PRIMARY KEY NOT NULL,
  DName VARCHAR2(30),
  MgrSSN VARCHAR2(5),
  MgrStartDate DATE
);
INSERT into DEPARTMENT VALUES(1,'IOT','M101','11/10/21');
INSERT INTO DEPARTMENT VALUES(2,'Management','M102','18/08/20');
INSERT INTO DEPARTMENT VALUES(3,'Business','M103','15/12/24');
INSERT INTO DEPARTMENT VALUES(4,'Software','M104','03/01/18');
INSERT INTO DEPARTMENT VALUES(5,'Accounts','M105','26/06/22');

CREATE TABLE DLOCATION (
    DNo INT,
    DLoc VARCHAR(100),
    PRIMARY KEY (DNo, DLoc),
    FOREIGN KEY (DNo) REFERENCES DEPARTMENT(DNo) ON DELETE CASCADE
);
insert into DLOCATION VALUES(1,'Syria');
insert into DLOCATION VALUES(2,'Iraq');
insert into DLOCATION VALUES(3,'Iran');
insert into DLOCATION VALUES(4,'Pakistan');
insert into DLOCATION VALUES(5,'Netherlands');

CREATE TABLE PROJECT (
    PNo INT PRIMARY KEY,
    PName VARCHAR(50) NOT NULL,
    PLocation VARCHAR(100),
    DNo INT,
    FOREIGN KEY (DNo) REFERENCES DEPARTMENT(DNo) ON DELETE SET NULL
);
insert into PROJECT values(000,'Database Management','Iraq',1);
insert into PROJECT values(001,'System Management','Netherlands',3);
insert into PROJECT values(002,'Accounts Management','Pakistan',5);
insert into PROJECT values(003,'Finance Management','Syria',4);
insert into PROJECT values(004,'Delivery Management','Iran',5);

CREATE TABLE WORKS_ON (
    SSN VARCHAR2(9),
    PNo INT,
    Hours DECIMAL(4, 1) CHECK (Hours > 0),
    PRIMARY KEY (SSN, PNo),
    FOREIGN KEY (SSN) REFERENCES EMPLOYEE(SSN) ON DELETE CASCADE,
    FOREIGN KEY (PNo) REFERENCES PROJECT(PNo) ON DELETE CASCADE
);