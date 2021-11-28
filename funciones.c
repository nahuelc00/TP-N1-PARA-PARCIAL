float sumar(float a, float b)
{
    return a + b;
}

float restar(float a, float b)
{
    return a - b;
}

float multiplicar(float a, float b)
{
    return a * b;
}

float dividir(float a, float b)
{
    if (a > 0 && b == 0 || a == 0 && b == 0)
    {
        return -1;
    }
    return a / b;
}

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