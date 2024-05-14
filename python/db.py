import pyodbc




try:
    connection=pyodbc.connect('DRIVER={SQL server};SERVER=MSI-1;DATABASE=angel;trusted_connection=yes;')
    print('Conexion exitosa')
    c_cursor=connection.Cursor()
    c_cursor.Execute('SELECT @@version;')
    row=c_cursor.fetchone()
    print(row)
   
    
except Exception as ex:
    print(ex)