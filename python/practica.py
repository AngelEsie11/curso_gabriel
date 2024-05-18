
list = []
calc = 1

while int(calc) < 11:
    list.append(calc)
    calc = int(calc) + 1




numero_1 = int(input("introduce el 1° número: "))
numero_2 = int(input("introduce el 2° número: "))
eleccion= True
suma = numero_1  + numero_2
resta = numero_1 - numero_2
multiplicacion = numero_1 * numero_2
 
while eleccion != 1 or eleccion != 2 or eleccion != 3 or eleccion != 4: 
    print("la opcion ingresada no es correcta")
    print("A continuación, puede realizar las siguientes operaciones:\n1) sumar los numeros ingresados, \n2) Restar los numeros ingresados, \n3) Multiplicar los numeros ingresados, \n4) Finalizar el programa  ")
    eleccion = int(input(("Indique qué operación desea realizar: ")))
    print(eleccion)
    if eleccion == 1: 
        #  TODO: reparar el codigo de $%##Q*
         print("El resultado de sumar",numero_1 + numero_2 ,"es:", suma)
    elif eleccion == 2: 
         print("El resultado de restar", numero_1 - numero_2, "es:", resta )
    elif eleccion == 3: 
        print("El resultado de mutiplicar", numero_1 * numero_2, "es:", multiplicacion )
        
    elif eleccion == 4: 
        
         break
    