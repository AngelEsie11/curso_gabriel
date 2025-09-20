<<<<<<< HEAD
import sys
import pyodbc

# connection parameters
nHost = 'msi-1'
nBase = 'INVENTARIO_ELECTRONICO'
nUser = ''
nPasw = ''
=======



if (5 < 9){



print("yes")




}
    
else{
    
    
    
    ( print("no"))}
   
>>>>>>> 3d71b2d409d6e2dbb0488b88cc47b2af6b85b8a9


try:
    connection =  pyodbc.connect('DRIVER={SQL Server};SERVER='+nHost+';DATABASE='+nBase+';UID='+nUser+';PWD='+nPasw)
    print('Conexion exitosa')

    

except Exception as ex:
    print(f"Error: {ex}")