float sumar(float a, float b){
    return a + b;
}

float restar(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){ 
    if (a > 0 && b == 0){
        return -1;
    }
    return a / b;
}

float calcularFactorial(float a){ 
float resultado = 1; 
for (int i = 1; a >= i; i++) {
    resultado = resultado * i; 
 }
 return resultado;
 }