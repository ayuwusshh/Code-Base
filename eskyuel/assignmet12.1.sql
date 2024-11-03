CREATE TABLE Hotel (
    Hotel_No INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Address VARCHAR(255) NOT NULL
);
INSERT INTO  Hotel VALUES(101,'Grosvenor Hotel','London');
INSERT INTO  Hotel VALUES(102,'Residency Hotel','Sydney');
INSERT INTO  Hotel VALUES(103,'Taj Hotel','Mumbai');
INSERT INTO  Hotel VALUES(104,'Marriot Hotel','London');
INSERT INTO  Hotel VALUES(105,'Fairfield Hotel','Kolkata');
INSERT INTO  Hotel VALUES(106,'Renuka Hotel','Howrah');

CREATE TABLE Room (
    Room_No INT,
    Hotel_No INT,
    Type VARCHAR(50) NOT NULL,
    Price VARCHAR2(10) NOT NULL,
    PRIMARY KEY (Room_No, Hotel_No),
    FOREIGN KEY (Hotel_No) REFERENCES Hotel(Hotel_No) ON DELETE CASCADE
);

INSERT INTO ROOM VALUES(001,101,'double','£30.00');
INSERT INTO ROOM VALUES(002,102,'family','£50.00');
INSERT INTO ROOM VALUES(003,103,'family','£30.00');
INSERT INTO ROOM VALUES(004,104,'double','£10.00');
INSERT INTO ROOM VALUES(005,105,'double','£40.00');
INSERT INTO ROOM VALUES(006,106,'family','£35.00');


CREATE TABLE Guest (
    Guest_No INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Address VARCHAR(255) NOT NULL
);


INSERT INTO GUEST VALUES(111,'Ayush Kumar Singh','India');
INSERT INTO GUEST VALUES(112,'Disha Nair','Singapore');
INSERT INTO GUEST VALUES(113,'Ankit Singh','Bangladesh');
INSERT INTO GUEST VALUES(114,'Ritesh Das','India');
INSERT INTO GUEST VALUES(115,'Bobby Banerjee','Nepal');
INSERT INTO GUEST VALUES(116,'Shreya Gupta','Bhutan');


CREATE TABLE Booking (
    Hotel_No INT,
    Guest_No INT,
    Date_From DATE NOT NULL,
    Date_To DATE NOT NULL,
    Room_No INT,
    PRIMARY KEY (Hotel_No, Guest_No, Date_From, Room_No),
    FOREIGN KEY (Hotel_No) REFERENCES Hotel(Hotel_No) ON DELETE CASCADE,
    FOREIGN KEY (Guest_No) REFERENCES Guest(Guest_No) ON DELETE CASCADE,
    FOREIGN KEY (Room_No, Hotel_No) REFERENCES Room(Room_No, Hotel_No) ON DELETE CASCADE
);
