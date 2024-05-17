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
    
    count = 0  # Initialize a counter

    while True:
        for row in rows:
            print(row)  # Print the row
            count += 1  # Increment the counter
            
            # Check if the counter has reached the limit
            if count >= Counter:
                pregu = input("Presione S para continuar o N para salir: ").strip().upper()
                if pregu == continual:
                    count = 0  # Reset the counter if the user wants to continue
                elif pregu == detener:
                    break  # Exit the loop if the user wants to stop
                else:
                    print("Entrada no valida. Saliendo del programa.")
                    break

        # If the loop is broken by user input or end of rows, exit the outer loop
        if count < Counter or pregu == detener or pregu not in (continual, detener):
            break

    cursor.close()
    connection.close()

except Exception as ex:
    print(f"Error: {ex}")