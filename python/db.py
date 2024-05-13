import pyodbc
import pandas as pd

#voy a crear cuatro variables donde guardare los datos de conexion de mi servidor sql server
server= 'MSI-1'
bd= 'angel'
user='angel'
password='Eren2111'

try:
    conexion = pyodbc.connect('driver={obdc driver 17 for sql server};server='+server+';database='+bd+';uid='+user+';pwd='+password)
    print('Conexion exitosa')
    
except:
    print('error al intentar')
    
    
print(pyodbc.drivers())
