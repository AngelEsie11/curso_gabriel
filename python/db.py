import pyodbc




try:
    connection=pyodbc.connect('DRIVER={SQL server};SERVER=MSI-1;DATABASE=angel;uid=;pwd=')
    print('Conexion exitosa')
    
except Exception as ex:
    print(ex)