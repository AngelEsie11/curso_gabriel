import pyodbc
import csv



try:
    connection=pyodbc.connect('DRIVER={SQL server};SERVER=MSI-1;DATABASE=angel;trusted_connection=yes;')
    print('Conexion exitosa')
    cursor = connection.cursor()
    cursor.execute("articulos_con_nombresprovedor ")
    rows = cursor.fetchall()
    while True:
        
        for row in rows:
            print(row)
        cursor.close()
        connection.close()
   
    
except Exception as ex:
    print(ex)