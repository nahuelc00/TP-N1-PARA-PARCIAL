<<<<<<< HEAD
#include "string.h"

int sumar(int a, int b)
=======
float sumar(float a, float b)
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
{
    return a + b;
}

<<<<<<< HEAD
int restar(int a, int b)
=======
float restar(float a, float b)
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
{
    return a - b;
}

<<<<<<< HEAD
int multiplicar(int a, int b)
=======
float multiplicar(float a, float b)
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
{
    return a * b;
}

<<<<<<< HEAD
int dividir(int a, int b)
=======
float dividir(float a, float b)
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
{
    if (a > 0 && b == 0 || a == 0 && b == 0)
    {
        return -1;
    }
    return a / b;
}

<<<<<<< HEAD
int calcularFactorial(int a)
{
    int factorial;
    if (a == 1 || a == 0)
    {
        return 1;
    }
    factorial = a * calcularFactorial(a - 1);

    return factorial;
}

int validarNumero(char string[])
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] != '\0')
        {
            if (string[i] < '0' || string[i] > '9')
            {
                return 0;
            }
            return 1;
        }
    }
}
=======
float calcularFactorial(float a)
{
    float factorial;
    if (a == 1 || a == 0)
    {
        //printf("1 -> 1 \n");
        return 1;
    }
    factorial = a * calcularFactorial(a - 1);
    //printf("%d -> %d \n",a ,result);
    return factorial;
}

/*float calcularFactorial(float a)
{
    float resultado = 1;
    for (int i = 1; a >= i; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}*/
>>>>>>> 52b5cd48edba9244118a998219e0b24a79f3f427
