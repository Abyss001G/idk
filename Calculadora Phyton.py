import math

while True:
    print("[+] Suma\n[-] Resta\n[*] Multiplicacion\n[/] Division\n[R] Raiz\n[^] Potencia\n")

    simbolo = input("Ingrese la operacion: ").strip().lower()

    match simbolo:
        
        case "+":
            try:

                a = float(input("Ingrese el primer numero: "))

                b = float(input("Ingrese el segundo numero: "))

                print("Resultado: ", a + b)

            except ValueError:
            
                print("\nDebes ingresar un numero valido\n")
                continue

        case "-":
            try:
                a = float(input("Ingrese el primer numero: "))

                b = float(input("Ingrese el segundo numero: "))

                print("Resultado: ", a - b)

            except ValueError:
            
                print("\nDebes ingresar un numero valido\n")
                continue

        case "*":
            try:
                a = float(input("Ingrese el primer numero: "))

                b = float(input("Ingrese el segundo numero: "))

                print("Resultado: ", a * b)

            except ValueError:

            
                print("\nDebes ingresar un numero valido\n")
                continue

        case "/":
            try:
                a = float(input("Ingrese el primer numero: "))

                b = float(input("Ingrese el segundo numero: "))

                if b != 0:

                    print("Resultado: ", a / b)
                else:

                    print("No se puede dividir entre 0")

            except ValueError:
            
                print("\nDebes ingresar un numero valido\n")
                continue

        case "r":
            try:

                a = float(input("Introduce el numero: "))

                if a < 0:

                    print("No se puede calcular la raiz de un numero negativo")

                else:
                
                    print("Resultado:", math.sqrt(a))

            except ValueError:

                print("\nDebes ingresar un numero valido\n")

                continue

        case "^":
            try:
                a = float(input("Introduce el primer numero base: "))

                b = float(input("Introduce el exponente: "))

                print("Resultado: ", math.pow(a, b))

            except ValueError:
            
                print("\nDebes ingresar un numero valido\n")
                continue

        case _:

            print("Operacion invalida")

            continue

    continuar = input("\nDesea realizar otra operacion? (s/n) ").strip().lower()

    if continuar != "s":

        break