CREATE TABLE employees(
    emp_no VARCHAR(10) PRIMARY KEY,
    name VARCHAR(50),
    dob DATE,
    sex CHAR(1),
    address VARCHAR(100),
    salary DECIMAL(10, 2)
);

CREATE TABLE company (
    comp_no VARCHAR(10) PRIMARY KEY,
    name VARCHAR(50),
    address VARCHAR(100)
);

CREATE TABLE works (
    emp_no VARCHAR(10),
    comp_no VARCHAR(10),
    PRIMARY KEY (emp_no, comp_no),
    FOREIGN KEY (emp_no) REFERENCES employees(emp_no),
    FOREIGN KEY (comp_no) REFERENCES company(comp_no)
);
-- Insert sample data into the employee table
INSERT INTO employees VALUES ('E0001', 'Alice', '15/05/00', 'F', '123 Elm St', 55000.00);
INSERT INTO employees VALUES ('E0002', 'Mona', '21/09/01', 'F', '456 Oak St', 50000.00);
INSERT INTO employees VALUES ('E0003', 'John', '30/11/98', 'M', '789 Pine St', 60000.00);
INSERT INTO employees VALUES ('E0004', 'Anna', '12/07/95', 'F', '321 Maple St', 62000.00);
INSERT INTO employees VALUES ('E0005', 'Sarah', '25/12/05', 'F', '654 Cedar St', 48000.00);
INSERT INTO employees VALUES ('E0006', 'Michael', '18/08/03', 'M', '987 Birch St', 51000.00);

-- Insert sample data into the company table
INSERT INTO company VALUES ('C00001', 'Tech Solutions', '500 Fifth Ave');
INSERT INTO company VALUES ('C00002', 'Innovate LLC', '200 Innovation Dr');
INSERT INTO company VALUES ('C00003', 'Global Corp', '101 World Rd');
INSERT INTO company VALUES ('C00004', 'Clifford Corp', '789 King St');

-- Insert sample data into the works table
INSERT INTO works VALUES ('E0001', 'C00002');
INSERT INTO works VALUES ('E0002', 'C00004');
INSERT INTO works VALUES ('E0003', 'C00001');
INSERT INTO works VALUES ('E0004', 'C00004');
INSERT INTO works VALUES ('E0005', 'C00003');
INSERT INTO works VALUES ('E0006', 'C00002');

select * from EMPLOYEES e
JOIN WORKS w on w.EMP_NO=e.EMP_NO
JOIN COMPANY c on c.COMP_NO=w.COMP_NO
where w.COMP_NO='C00002';

select E.name from EMPLOYEES E
join works W on W.emp_no = E.EMP_NO
JOIN COMPANY C ON C.COMP_NO = W.COMP_NO
WHERE C.NAME = 'Clifford Corp';

select e.name from EMPLOYEES e
where e.name like '%a';

select name from employees 
where dob > '31/12/99' and dob < '01/01/12';