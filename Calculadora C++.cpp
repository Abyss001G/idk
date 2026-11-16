#include <iostream>
#include <cmath>

int main()
{
    char op;
    double num1;
    double num2;
    double resultado;
    char continuar;
    
    do { 
        std::cout<<"Ingrese (+ - * / p r): ";
        std::cin >> op;
        
        switch (op) {
            case '+':
                std::cout<<"Ingrese el primer numero: ";
                std::cin>>num1;
        
                std::cout<<"Ingrese el segundo numero: ";
                std::cin>>num2;
                resultado = num1 + num2;
                std::cout<<"\nEl resultado es: "<< resultado << std::endl;
                break;
            
            case '-':
                std::cout<<"Ingrese el primer numero: ";
                std::cin>>num1;
        
                std::cout<<"Ingrese el segundo numero: ";
                std::cin>>num2;
                resultado = num1 - num2;
                std::cout<<"El resultado es: "<< resultado << std::endl;
                break;
            
            case '*':
                std::cout<<"Ingrese el primer numero: ";
                std::cin>>num1;
        
                std::cout<<"Ingrese el segundo numero: ";
                std::cin>>num2;
                resultado = num1 * num2;
                std::cout<<"El resultado es: "<< resultado << std::endl;
                break;
            
            case '/':
                std::cout<<"Ingrese el primer numero: ";
                std::cin>>num1;
        
                std::cout<<"Ingrese el segundo numero: ";
                std::cin>>num2;
                
                if (num2 != 0) {
                    resultado = num1 / num2;
                    std::cout<<"El resultado es: "<< resultado << std::endl;
                } else {
                    std::cout<<"No se puede dividir entre cero" << std::endl;
                }
                break;
                
            case 'P':
            case 'p':
                std::cout<<"Ingrese la base: ";
                std::cin>>num1;
    
                std::cout<<"Ingrese el exponente: ";
                std::cin>>num2;
            

                resultado = pow(num1, num2); 
                std::cout<<"El resultado es: "<< resultado << std::endl;
                break;
                
            case 'R':
            case 'r':
                std::cout<<"Ingrese el numero para calcular su raiz cuadrada: ";
                std::cin>>num1;
            

                if (num1 >= 0) {
                    resultado = sqrt(num1); 
                    std::cout<<"El resultado es: "<< resultado << std::endl;
                } else {
                    std::cout<<"No se puede calcular la raiz cuadrada de un numero negativo\n";
                }
                break;
            
                default:
                    std::cout<<"Operacion invalida\n";
        }
        
        std::cout << "\nDesea realizar otra operacion? (s/n): ";
        std::cin >> continuar;
        std::cout << std::endl;
        
    } while (continuar == 's' || continuar == 'S');
    
    std::cout << "Finalizado\n";
    
    return 0;
}