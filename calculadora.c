#include <stdio.h>
#include <math.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
float potencia(float a, float b);
float iva(float a);

int main ( int argc, char *argv[]){
     printf("----------------------------MENU--------------------------------\n");
     printf("1. Suma\n");
     printf("2. Resta\n");
     printf("3. Multiplicacion\n");
     printf("4. Division\n");
     printf("5. Potencia\n");
     printf("6. Porcentaje\n");
}


float division(float a, float b) {
    float resultado = a / b; //a: dividendo; b:divisor
    return resultado;
}

float multiplicacion(float a, float b){
  return a * b;
}

