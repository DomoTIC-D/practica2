#include <stdio.h>
#include <math.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
float potencia(float a, float b);
float iva(float a);

int main ( int argc, char *argv[]){
    int opcion;
	float a,b;
	float (*funcion) (float,float);
	float resultado;
     	do{
		printf("----------------------------MENU--------------------------------\n");
     		printf("1. Suma\n");       
     		printf("2. Resta\n");  
     		printf("3. Multiplicacion\n");  
     		printf("4. Division\n");  
     		printf("5. Potencia\n");
     		printf("6. Porcentaje\n");
     		printf("7. Salir\n");
		scanf("%d", &opcion);
		if(opcion >=1 && opcion <=5){
			printf("Dame el primer numero\n");
                	scanf("%f",a);
                	printf("Dame el segundo numero\n");
                	scanf("%f",b);
		}
		switch(opcion){
                	case 1: 
				funcion = suma;
             	         	break;
                	case 2:
				funcion = resta;
				break;
                	case 3:
				funcion = multiplicacion;
				break;
               		case 4:
				funcion = potencia;
				break;
                	case 5:
				funcion = division;
				break;
			case 7:
				exit(0);
        	}

		if(opcion>=1 && opcion<=5){
			resultado = funcion(a,b);
		}

		if(opcion==6){
			printf("Dame el precio a sacar el iva\n");
			scanf("%f",a);
			resultado = iva(a);
		}

		printf("El resultado es %f \n",resultado);
	}while(opcion!=7);

	return 0;
}

float multiplicacion(float a, float b){
  return a * b;
}

float suma(float a, float b){
	return a+b;
}

float resta ( float a, float b) { 
        return a-b;
}

float division(float a, float b) {
    float resultado = a / b; //a: dividendo; b:divisor
    return resultado;
}

float multiplicacion(float a, float b){
  return a * b;
}

float potencia(float a, float b){
    
    float resultado=a;
    int i;
    for (i=0;i<b-1;i++)
    {
        resultado=multiplicacion(resultado,a);
        
        }
    
    return resultado;
    
}

float peseta2euro(float x){
    return multiplicacion(x,0.00601012);
}

float euro2peseta(float x){
    return multiplicacion(x,(division(1,0.00601012)));
}
    
	
float iva(float a){
  return a * 0.21;
}