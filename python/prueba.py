import pyodbc
import csv

continual = "S"
detener=  "N"
v= True
Counter=10
try:
    connection=pyodbc.connect('DRIVER={SQL server};SERVER=MSI-1;DATABASE=angel;trusted_connection=yes;')
    print('Conexion exitosa')
   
    
    
    while v   :
          
          cursor = connection.cursor()
          cursor.execute("SELECT ARTICULOS.*, SUPLIDORES.NOMBRE AS PROVEEDOR FROM ARTICULOS LEFT JOIN SUPLIDORES ON ARTICULOS.SUPLIDOR_ID = SUPLIDORES.ID;")
          rows = cursor.fetchall()
          
          
          if row < Counter:
               pregu= str(input("Presione S/N si desea continual o salir "))
          
          elif pregu == continual:
                 for row in rows:
               
                    print(row)
               
          elif pregu == detener:
               break
          
      
         
         # for row in rows:
               
            #print(row)
          cursor.close()
          connection.close()
   
    
except Exception as ex:
    print(ex)
