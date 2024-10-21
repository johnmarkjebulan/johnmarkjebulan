/*create database product;*/

create table tblproducts(
ITEM_NUMBER int Primary key,
PRODUCT varchar(50) not null,
EXPIRATION_DATE int not null,
BRAND varchar(50) not null,
PRICE int not null
);
insert into tblproducts (ITEM_NUMBER,
                         PRODUCT,
                         EXPIRATION_DATE,
                         BRAND,
                         PRICE

) VALUES
(1,"Instant Noodles", "2024-12-09", "Lucky Me", 10),
(2,"Canned Sardines", "2025-03-15", "Ligo", 15),
(3,"Rice (1 kg)", "N/A", "N/A", 50),
(4,"Sweetened Condensed Milk", "2025-06-01", "Nestlé", 45),
(5,"Soap", "2026-01-05", "Safeguard", 20),
(6,"Snacks (Chips)", "2024-09-20", "Jack 'n Jill", 25),
(7,"Soft Drinks (1L)", "2025-08-10", "Coca-Cola", 40),
(8,"Cooking Oil (1L)", "2025-12-15", "Purefoods", 100),
(9,"Coffee (3-in-1)", "2024-11-30", "Nescafé", 15),
(10,"Toilet Paper (4 rolls)", "N/A", "Charm", 30),
(11,"Bread (Loaf)", "2024-10-01", "Gardenia", 50),
(12,"Sugar (1 kg)", "N/A", "N/A", 40),
(13,"Margarine", "2025-05-01", "Purefoods", 30),
(14,"Fish Sauce", "2026-02-20", "Datu Puti", 20),
(15,"Soy Sauce", "2025-07-15", "Kikkoman", 30),
(16,"Pancake Mix", "2025-01-10", "Aunt Jemima", 60),
(17,"Corned Beef", "2025-04-30", "Purefoods", 60),
(18,"Biscuits", "2024-11-15", "Oreo", 25),
(19,"Instant Coffee", "2025-03-01", "3-in-1", 20),
(20,"Spaghetti (500g)", "2025-12-01", "Del Monte", 40),
(21,"Detergent (Powder)", "2024-09-15", "Tide", 45),
(22,"Shampoo", "2025-06-20", "Head & Shoulders", 150),
(23,"Toothpaste", "2026-01-25", "Colgate", 50),
(24,"Ice Cream (Pint)", "2024-08-15", "Magnolia", 80),
(25,"Oats (Instant)", "2025-12-10", "Quaker", 45);

Select * from tblproducts
