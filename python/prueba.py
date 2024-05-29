import sys
import pyodbc

# connection parameters
nHost = 'msi-1'
nBase = 'INVENTARIO_ELECTRONICO'
nUser = ''
nPasw = ''


try:
    connection =  pyodbc.connect('DRIVER={SQL Server};SERVER='+nHost+';DATABASE='+nBase+';UID='+nUser+';PWD='+nPasw)
    print('Conexion exitosa')

    

except Exception as ex:
    print(f"Error: {ex}")