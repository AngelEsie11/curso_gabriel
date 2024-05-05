--Seleccionar todos los artículos
select* from articulos
--Contar el número de artículos en stock
select stock from articulos

UPDATE ARTICULOS
SET precio = 100
WHERE precio = 95;

delete from ARTICULOS
WHERe id=1

select * from  ARTICULOS
where SUPLIDOR_ID = 4;

SELECT SUM(precio * stock) AS valor_total_inventario
FROM articulos;

UPDATE ARTICULOS
SET STOCK = 30
WHERE STOCK = 17;

UPDATE articulos
SET stock = stock - ventas
WHERE ventas IS NOT NULL;

SELECT TOP 10 *
FROM ARTICULOS
ORDER BY precio DESC;

SELECT SUPLIDOR_ID, AVG(Stock) AS PromedioStock
FROM ARTICULOS
GROUP BY SUPLIDOR_ID;

DELETE FROM ARTICULOS
WHERE Stock = 8;

SELECT Id, SUM(STOCK * PRECIO) AS ValorTotalVentas
FROM ARTICULOS
GROUP BY Id

SELECT *
FROM (
    SELECT *, ROW_NUMBER() OVER (PARTITION BY SUPLIDOR_ID ORDER BY Precio) AS row_num
    FROM ARTICULOS
) AS sub
WHERE row_num = 1;

SELECT SUM(Precio - STOCK) AS GananciaTotal
FROM ARTICULOS;

UPDATE ARTICULOS
SET Stock = 
    CASE 
        WHEN Id = 1 THEN 50
        WHEN Id = 2 THEN 100
        WHEN ID = 3 THEN 75
        -- Agrega más casos según sea necesario
        ELSE Stock
    END
WHERE Id IN (1, 2, 3);

SELECT DISTINCT P.SUPLIDOR_ID
FROM ARTICULOS p
WHERE Id IN (
    SELECT Id
    FROM ARTICULOS
    WHERE Stock = 6
);

SELECT SUPLIDOR_ID , 
       COUNT(*) AS TotalArticulos,
       SUM(CASE WHEN Stock > 0 THEN 1 ELSE 0 END) AS ArticulosEnStock,
       CAST(SUM(CASE WHEN Stock > 0 THEN 1 ELSE 0 END) AS DECIMAL) / COUNT(*) * 100 AS PorcentajeEnStock
FROM ARTICULOS
GROUP BY SUPLIDOR_ID;

WITH PromedioVentas AS (
    SELECT AVG(STOCK) AS Promedio
    FROM ARTICULOS
)
SELECT Id, STOCK
FROM ARTICULOS
WHERE STOCK > (SELECT Promedio FROM PromedioVentas);

SELECT Id, PRECIO, STOCK,
       PRECIO * 1.20 AS PrecioRecomendado
FROM ARTICULOS;

SELECT Id, SUM(STOCK) AS TotalVendido --OJO
FROM ARTICULOS
WHERE PRECIO BETWEEN '2024-05-01' AND '2024-05-02' -- Especifica tu período de tiempo aquí
GROUP BY Id
ORDER BY TotalVendido DESC;

SELECT SUPLIDOR_ID, SUM(Precio * Stock) AS ValorTotalInventario
FROM ARTICULOS
GROUP BY SUPLIDOR_ID;