#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "funciones.h"
//#include <windows.h>

#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"

int main()
{
<<<<<<< HEAD

    char seguir = 's';
    int opcion = 0;
    char auxA[100];
    char auxB[100];
    char auxFactorial[100];
    char opcionAux[100];
    int a = 0;
    int b = 0;
    int validacionNumero = 0;
    int factorial = 0;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMulti = 0;
    int resultadoDiv = 0;
=======
    char seguir = 's';
    int opcion = 0;
    float a = 0;
    float b = 0;
    int factorial = 0;
    float resultadoSuma = 0;
    float resultadoResta = 0;
    float resultadoMulti = 0;
    float resultadoDiv = 0;
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
    int resultadoFactorial = 0;

    while (seguir == 's')
    {

        printf(CYAN "---------------------------- \n" RESET);
        printf(CYAN "|---> MENU CALCULADORA <---| \n" RESET);
        printf(CYAN "---------------------------- \n \n" RESET);

<<<<<<< HEAD
        printf("1. Ingrese primer valor ");

        printf(RED "(%d)\n" RESET, a);

        printf("2. Ingrese el segundo valor ");

        printf(RED "(%d)\n" RESET, b);

        printf("3. Sumar dos numeros ");

        printf(RED "(%d)\n" RESET, resultadoSuma);

        printf("4. Restar dos numeros ");

        printf(RED "(%d)\n" RESET, resultadoResta);

        printf("5. Multiplicar dos numeros ");

        printf(RED "(%d)\n" RESET, resultadoMulti);

        printf("6. Dividir dos numeros ");

        printf(RED "(%d)\n" RESET, resultadoDiv);

        printf("7. Calcular el factorial ");

        printf(RED "(%d)\n" RESET, resultadoFactorial);

        printf("8. Calcular todas las operaciones\n");

=======
        //Sleep(200);
        printf("1. Ingrese primer valor ");
        //Sleep(200);
        printf(RED "(%.2f)\n" RESET, a);
        //Sleep(200);
        printf("2. Ingrese el segundo valor ");
        //Sleep(200);
        printf(RED "(%.2f)\n" RESET, b);
        //Sleep(200);
        printf("3. Sumar dos numeros ");
        //Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoSuma);
        //Sleep(200);
        printf("4. Restar dos numeros ");
        //Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoResta);
        //Sleep(200);
        printf("5. Multiplicar dos numeros ");
        //Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoMulti);
        //Sleep(200);
        printf("6. Dividir dos numeros ");
        //Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoDiv);
        //Sleep(200);
        printf("7. Calcular el factorial ");
        //Sleep(200);
        printf(RED "(%d)\n" RESET, resultadoFactorial);
        //Sleep(200);
        printf("8. Calcular todas las operaciones\n");
        //Sleep(200);
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
        printf("9. Salir\n \n");

        printf(GREEN "Elija que hacer:" RESET);

<<<<<<< HEAD
        scanf("%s", &opcionAux);

        if (validarNumero(opcionAux) == 0)
        {
            printf(RED "El dato ingresado para el menu no es un numero, por favor ingrese un numero \n" RESET);
            printf("\n");
        }
        if (validarNumero(opcionAux) == 1)
        {
            opcion = atoi(opcionAux);

            switch (opcion)
            {
            case 1:
            {

                printf("Ingrese el valor de A: ");
                scanf("%s", auxA);

                if (validarNumero(auxA) == 0)
                {
                    printf(RED "El dato ingresado no es un numero, por favor ingrese un numero \n" RESET);
                    printf("\n");
                }
                if (validarNumero(auxA) == 1)
                {
                    a = atoi(auxA);
                }
            }
            break;

            case 2:
            {
                printf("Ingrese el valor de B: ");
                scanf("%s", auxB);

                if (validarNumero(auxB) == 0)
                {
                    printf(RED "El dato ingresado no es un numero, por favor ingrese un numero \n" RESET);
                    printf("\n");
                }
                if (validarNumero(auxB) == 1)
                {
                    b = atoi(auxB);
                }
            }
            break;

            case 3:
            {
                resultadoSuma = sumar(a, b);

                printf("La suma da como resultado: %d\n", resultadoSuma);

                printf("\n");
            }
            break;

            case 4:
            {
                resultadoResta = restar(a, b);

                printf("La resta da como resultado: %d\n", resultadoResta);

                printf("\n");
            }
            break;

            case 5:
            {
                resultadoMulti = multiplicar(a, b);

                printf("La multiplicacion da como resultado: %d\n", resultadoMulti);

                printf("\n");
            }
            break;

            case 6:
            {
                float div = dividir(a, b);
                if (div == -1)
                {

                    printf(RED "La division no se puede realizar\n" RESET);

                    printf("\n");
                    resultadoDiv = 0;
                }
                else
                {
                    resultadoDiv = div;

                    printf("La divison da como resultado: %d\n", resultadoDiv);

                    printf("\n");
                }
            }
            break;

            case 7:
            {
                printf("Ingrese un valor para el factorial: ");
                scanf("%s", &auxFactorial);
                if (validarNumero(auxFactorial) == 0)
                {
                    printf(RED "El dato ingresado para factorial no es un numero, por favor ingrese un numero \n" RESET);
                    printf("\n");
                }
                if (validarNumero(auxFactorial) == 1)
                {
                    factorial = atoi(auxFactorial);
                    printf("El factorial da como resultado: %d\n", calcularFactorial(factorial));
                    resultadoFactorial = calcularFactorial(factorial);
                    printf("\n");
                }
            }
            break;

            case 8:
            {
                resultadoSuma = sumar(a, b);

                printf("La suma da como resultado: %d\n", resultadoSuma);

                resultadoResta = restar(a, b);

                printf("La resta da como resultado: %d\n", resultadoResta);

                resultadoMulti = multiplicar(a, b);

                printf("La multiplicacion da como resultado: %d\n", resultadoMulti);

                float div = dividir(a, b);
                if (div == -1)
                {

                    printf(RED "La division no se puede realizar\n" RESET);
                    resultadoDiv = 0;
                }
                else
                {
                    resultadoDiv = div;

                    printf("La divison da como resultado: %d\n", resultadoDiv);
                }

                printf("Ingrese un valor para el factorial: ");
                scanf("%s", &auxFactorial);
                if (validarNumero(auxFactorial) == 0)
                {
                    printf(RED "El dato ingresado para factorial no es un numero, por favor ingrese un numero \n" RESET);
                    printf("\n");
                }
                if (validarNumero(auxFactorial) == 1)
                {
                    factorial = atoi(auxFactorial);
                    printf("El factorial da como resultado: %d\n", calcularFactorial(factorial));
                    resultadoFactorial = calcularFactorial(factorial);
                    printf("\n");
                }
            }
            break;

            case 9:
            {
                seguir = 'n';
            }
            break;

            default:
            {
                printf(RED "Por favor, ingrese una opcion valida\n" RESET);
                printf("\n");
            }
            break;
            }
        }
        printf("\n");
    }
=======
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            printf("Ingrese el valor de A: ");
            scanf("%f", &a);

            /*if (a == 0)
            {
                printf("El dato ingresado no es un numero, por favor ingrese un numero \n");
                seguir = 'n';
            }*/
            //printf("fuera del if case 1 \n");

            break;
        }
        break;

        case 2:
        {
            printf("Ingrese el valor de B: ");
            scanf("%f", &b);

            if (b == 0)
            {
                printf("El dato ingresado no es un numero, por favor ingrese un numero \n");
                seguir = 'n';
            }
            break;
        }
        break;

        case 3:
        {
            resultadoSuma = sumar(a, b);
            printf("La suma da como resultado: %.2f\n", resultadoSuma);
        }
        break;

        case 4:
        {
            resultadoResta = restar(a, b);
            printf("La resta da como resultado: %.2f\n", resultadoResta);
        }
        break;

        case 5:
        {
            resultadoMulti = multiplicar(a, b);
            printf("La multiplicacion da como resultado: %.2f\n", resultadoMulti);
        }
        break;

        case 6:
        {
            float div = dividir(a, b);
            if (div == -1)
            {
                printf("La division no se puede realizar\n");
                resultadoDiv = 0;
            }
            else
            {
                resultadoDiv = div;
            }
            printf("La division da como resultado: %.2f\n", div);
        }
        break;

        case 7:
        {

            printf("Ingrese un valor para el factorial: ");
            scanf("%d", &factorial);
            resultadoFactorial = calcularFactorial(factorial);
            printf("El factorial es: %d\n", factorial);
        }
        break;

        case 8:
        {
            resultadoSuma = sumar(a, b);
            printf("La suma da como resultado: %.2f\n", resultadoSuma);

            resultadoResta = restar(a, b);
            printf("La resta da como resultado: %.2f\n", resultadoResta);
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427

            resultadoMulti = multiplicar(a, b);
            printf("La multiplicacion da como resultado: %.2f\n", resultadoMulti);

            float div = dividir(a, b);
            if (div == -1)
            {
                printf("La division no se puede realizar\n");
                resultadoDiv = 0;
            }
            else
            {
                resultadoDiv = div;
                printf("El resultado de la division es: %.2f\n", resultadoDiv);
            }

            printf("Ingrese un valor para el factorial: ");
            scanf("%d", &factorial);
            resultadoFactorial = calcularFactorial(factorial);
            printf("El factorial es: %d\n", resultadoFactorial);
        }
        break;

        case 9:
        {
            seguir = 'n';
        }
        break;

        default:
        {
            printf("Por favor, ingrese una opcion valida\n");
        }
        break;
        }
    }
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
