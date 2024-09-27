CREATE TABLE tblstudent (
    StudentID int PRIMARY KEY UNIQUE,
    FirstName VARCHAR(20) NOT NULL,
    LastName VARCHAR(20) NOT NULL,
    PhoneNumber VARCHAR(11),
    Enrolled_date DATE NOT NULL
);

INSERT INTO tblstudent (
    StudentID,
    FirstName,
    LastName,
    PhoneNumber,
    Enrolled_date
) VALUES
    (1, 'JOHN MARK', 'JEBULAN', '09082838172', '2024-09-27'),
    (2, 'MARIA KRISTINA', 'TORRES', '09919159513', '2024-09-26'),
    (3, 'JUAN', 'DELA CRUZ', '09919159514', '2024-09-25'),
    (4, 'ANA', 'GARCIA', '09919159515', '2024-09-24'),
    (5, 'PEDRO', 'MENDOZA', '09919159516', '2024-09-23'),
    (6, 'LUIS', 'RAMOS', '09919159517', '2024-09-22'),
    (7, 'CARLA', 'REYES', '09919159518', '2024-09-21'),
    (8, 'JAMES', 'BONDOC', '09919159519', '2024-09-20'),
    (9, 'KAREN', 'CRUZ', '09919159520', '2024-09-19'),
    (10, 'MARK', 'TAN', '09919159521', '2024-09-18');
    
    
    SELECT * FROM  tblstudent
