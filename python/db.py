import pyodbc

continual = "S"
detener = "N"
Counter = 10

try:
    connection = pyodbc.connect('DRIVER={SQL Server};SERVER=MSI-1;DATABASE=angel;trusted_connection=yes;')
    print('Conexion exitosa')

    cursor = connection.cursor()
    cursor.execute("articulos_con_nombresprovedor")
    rows = cursor.fetchall()
    
    count = 0  

    while True:
        for row in rows:
            print(row)  
            count += 1 
            
            # ELegir la selecion ya sea continual o salir
            if count >= Counter:
                pregu = input("Presione S para continuar o N para salir: ").strip().upper()
                if pregu == continual:
                    count = 0  # resetiar el contador
                elif pregu == detener:
                    print("termino el proceso")
                    break  #Detener el bucle
                else:
                    print("Entrada no valida. Saliendo del programa.")
                    break

        # aqui sale del bucle exterior
        if count < Counter or pregu == detener or pregu not in (continual, detener):
            break

    cursor.close()
    connection.close()

except Exception as ex:
    print(f"Error: {ex}")

