----- 


Select Customers.customer_name ,COUNT(DISTINCT Orders.order_id),SUM(Order_Item.quantity * Order_items.unit_price) from Customers 
JOIN Countries ON Customers.country_id = Countries.country_id=country.country_id
JOIN Orders ON Orders.customer_id = Customers.customer_idatus_id
JOIN Order_items ON Order_items.order_id = oder.order_id
where country_n ='Uk' 
JOIN Order_Status ON Order_status.status_id = Orders.st
AND YEAR(Orders.order_date) = 2025 
AND Order_status.status_name = 'Completed'
Group BY Customers.customer_name;




Select 


