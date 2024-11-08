/*create database product;*/

create table tblproducts(
PRODUCT_ID int Primary key,
PRODUCT_NAME varchar(50) not null,
BRAND_NAME varchar(50) not null,
CATEGORY int not null,
PRICE int not null,
STOCK int not null
);
insert into tblproducts (PRODUCT_ID,
                         PRODUCT_NAME,
                         BRAND_NAME,
                         CATEGORY,
                         PRICE,
                         STOCK

) VALUES
(1,"iPHONE 14", "Apple", "Electronics", 999.99, 100),
(2,"Galaxy S23", "Samsung", "Electronics", 899.99, 150),
(3,"Aie Max", "Nike", "Fashion", 120.00, 50),
(4,"EcoSmart TV", "Sony", "Electronics", 450.00, 75),
(5,"Running Shoes", "Adidas", "Fashion", 95.50, 200),
(6,"MacBook Pro", "Apple", "Electronics", 1399.99, 80),
(7,"Whirlpool Washer", "Whirlpool", "Appliances", 700, 30),
(8,"OLED TV", "LG", "Electronics", 1299.99, 40),
(9,"Gucci Leather Bag", "Gucci", "Fashion", 2500.00, 20),
(10,"Ford Mustang", "Ford", "Automotive", 150.00, 30),
(11,"Panasonic Microwave", "Panasonic", "Appliances", 150.00, 100),
(12,"Honda Civic", "Honda", "Automotive", 2200.00, 10),
(13,"Airpods Pro", "Apple", "Electronics", 249.99, 150),
(14,"Galaxy Tab S8", "Samsung", "Electronics", 699.99, 90),
(15,"EcoDrive Watch", "Citizen", "Fashion", 299.99, 35),
(16,"Gaming Latop", "Asus", "Electronics", 1200.00, 40),
(17,"Leather Jacket", "H&M", "Fashion", 180.00, 25),
(18,"Reebook Running Shoes", "Reebook", "Fashion", 85.00, 120),
(19,"Audi Q5", "Audi", "Automotive", 5000.00, 8),
(20,"LG Refrigerator", "LG", "Appliances", 1200.00, 60),
(21,"Bosch Dishwasher", "Bosch", "Appliances", 800.00, 50), 
(22,"Samsung Smart TV","Samsung", "Electronics", 600.00, 100),
(23,"Nike Air Zoom", "Nike", "Fashion", 130.00, 200),
(24,"Beats Headphone", "Beats", "Electronics", 349.99, 70),
(25,"Lenovo Think Pod", "Lenovo", "Electronics", 999.99, 65),
(26,"Toyota Corolla", "Toyota", "Automotive", 1900.00, 12),
(27,"Tissot Chrono watch", "Tissot", "Fashion", 600.00, 30),
(28,"Adidas Hoodie", "Adidas", "Fashion", 80.00, 150),
(29,"Mac Book Air", "Apple", "Elctronics", 1099.99, 90),
(30,"JBL Bluetooth Speaker", "JBL", "Electronics", 120.00, 200),
(31,"Gucci Sunglasses", "Gucci", "Fashion", 400.00, 25),
(32,"Nike Running Socks", "Nike", "Fashion", 20.00, 300),
(33,"LG Washing Machine", "LG", "Appliances", 650.00, 45),
(34,"Samsung Galaxy Watch", "Samsung", "Electronics", 199.99, 95),
(35,"Adidas Backpack", "Adidas", "Fashion", 70.00, 95);

Select * from tblproducts
