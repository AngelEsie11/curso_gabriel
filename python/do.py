palabra_secreta = "s"
counter = 0

while True:
    palabra = input("Ingresa la palabra secreta: ").lower()
    counter +=  1
    if palabra == palabra_secreta:
        break
    if palabra != palabra_secreta and counter > 7: 
        break