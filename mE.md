/*CREATE DATABASE dbElola;*/ 

CREATE TABLE tblstudents(
SID int primary key,
FirstName varchar(20) not null, 
LastName varchar(20) not null, 
PhoneNumber varchar(11) not null, 
EmailAddress varchar(30) not null, 
Address varchar(30) not null, 
DateEnrolled date not null,
Scholar bool not null 
);

INSERT INTO tblstudents(
SID,
FirstName,
LastName,
PhoneNumber,
EmailAddress,
Address,
DateEnrolled,
Scholar
) VALUES 
(19, "Isabella Grace", "Elola", "09503767918", "23-12318@g.batstate-u.edu.ph", "Salong Calaca City, Batangas", "24/07/23",1),
(20, "Angel Bert", "Gonzales", "09292695926", "22-11732@g.batstate-u.edu.ph", "Gumamela Balayan Batangas", "24/07/23", 0),
(21, "Ma. Elizabeth", "Gutierrez", "09759778589", "23-19461@g.batstate-u.edu.ph", "Caybunga Balayan Batangas", "24/07/23", 1),
(22, "David Emanuel", "Haboc", "09266222452", "23-14890@g.batstate-u.edu.ph", "Baclaran, Balayan Batangas", "24/08/22", 0),
(23, "John Mark Angelo", "Jebulan", "09082838172", "23-74405@g.batstate-u.edu.ph", "Baclaran, Balayan Batangas", "24/08/22", 0),
(24, "Mary Rose", "Julongbayan", "09361586320", "23-19080@g.batstate-u.edu.ph", "Salong, Calaca City Batangas", "24/07/28", 1),
(25, "Hazel", "Laguras", "09971453097", "23-14869@g.batstate-u.edu.ph", "Puting Bato West Calaca City, Batangas", "24/07/22", 1),
(26, "Trisha Anne", "Macalindong", "09660026266", "23-11136@g.batstate-u.edu.ph", "Bagong Tubig, Calaca City, Batangas", "24/07/23", 1),
(27, "Mark Angelo", "Patal", "09913195933", "23-14158@g.batstate-u.edu.ph", "Pantay, Calaca City , Batangas", "24/07/23", 1),
(28, "Mark Xander", "Patal", "09690484636", "23-10462@g.batstate-u.edu.ph", "Caloocan, Balayan, Batangas", "24/07/29", 1),
(29, "Catherine Joy", "Riosa", "09660012716", "23-16740@g.batstate-u.edu.ph", "Salong, Calaca City , Batangas", "24/08/08", 1),
(30, "Kim Eduard", "Saludes", "09052400563", "22-10207@g.batstate-u.edu.ph", "Taludtod, Balayan, Batangas", "24/08/14", 0),
(31, "Mia Alexa", "Tindoc", "09162555654", "23-14633@g.batstate-u.edu.ph", "Puting Bato West, Calaca City, Batangas", "24/07/31", 1),
(32, "Lawrence", "Villalobos", "09919159512", "23-15909@g.batstate-u.edu.ph", "Pantay Calaca Batangas", "24/07/07", 1),
(33, "Luraine", "Villaranda", "09817235903", "23-17947@g.batstate-u.edu.ph", "Camastilisan, Calaca City, Batangas", "24/07/23", 1);



 /*Select all records from the table*/
SELECT * FROM tblStudents;
