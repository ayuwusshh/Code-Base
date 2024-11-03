-- Create Books table
CREATE TABLE Books (
    book_id INT PRIMARY KEY,
    title VARCHAR(150),
    genre_id INT,
    publisher_id INT,
    FOREIGN KEY (genre_id) REFERENCES Genres(genre_id),
    FOREIGN KEY (publisher_id) REFERENCES Publishers(publisher_id)
);
-- inserting in book
INSERT INTO Books VALUES (1, 'To Kill a Mockingbird', 1, 1);
INSERT INTO Books VALUES (2, 'A Brief History of Time', 2, 3);
INSERT INTO Books VALUES (3, 'Dune', 3, 2);
INSERT INTO Books VALUES (4, 'The Hobbit', 4, 4);
INSERT INTO Books VALUES (5, '1984', 1, 1);
INSERT INTO Books VALUES (6, 'Sapiens: A Brief History of Humankind', 2, 3);

-- Create Authors table
CREATE TABLE Authors (
    author_id INT PRIMARY KEY,
    name VARCHAR(100),
    nationality VARCHAR(50),
    birth_year INT
);
desc Authors;
-- Create Members table
CREATE TABLE Members (
    member_id INT PRIMARY KEY,
    name VARCHAR(100),
    join_date DATE,
    email VARCHAR(100)
);
desc Members;
-- Create Borrow_Records table
CREATE TABLE Borrow_Records (
    record_id INT PRIMARY KEY,
    member_id INT,
    book_id INT,
    borrow_date DATE,
    return_date DATE,
    FOREIGN KEY (member_id) REFERENCES Members(member_id),
    FOREIGN KEY (book_id) REFERENCES Books(book_id)
);
desc Borrow_Records;
-- Create Genres table
CREATE TABLE Genres (
    genre_id INT PRIMARY KEY,
    genre_name VARCHAR(50),
    description VARCHAR(255)
);
desc Genres;

INSERT INTO Genres VALUES(1, 'Fiction', 'Narrative literature created from the imagination.');
INSERT INTO Genres VALUES(2, 'Non-Fiction', 'Prose based on facts and reality.');
INSERT INTO Genres VALUES(3, 'Science Fiction', 'Stories often telling about science and technology of the future.');
INSERT INTO Genres VALUES(4, 'Fantasy', 'Fiction with magical or supernatural elements.');

-- Create Publishers table
CREATE TABLE Publishers (
    publisher_id INT PRIMARY KEY,
    name VARCHAR(100),
    country VARCHAR(50),
    established_year INT
);
desc Publishers;

INSERT INTO Publishers VALUES (1, 'Penguin Random House', 'USA', 1927);
INSERT INTO Publishers VALUES (2, 'HarperCollins', 'USA', 1989);
INSERT INTO Publishers VALUES (3, 'Simon & Schuster', 'USA', 1924);
INSERT INTO Publishers VALUES (4, 'Macmillan Publishers', 'UK', 1843);


