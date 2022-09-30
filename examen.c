//Examen de Estructura De Datos 
//Problema 1. Exponenciación entera

#include <stdio.h>

float pot(float b, int exx){
	float r;
	if (exx ==0){
		r= 1.0;
	}
	else if(exx>0)
	{
		r= b * pot(b,exx -1);
	}
	else if (exx<0)
	{
		r= 1.0/b * pot(b,exx +1);
	}
	return r;
}

float pot(float b, int exx);
int main(){
	int b, exx;
	float r;

	printf("Introduce el numero:");
	scanf("%d",&b);
	printf("Ingresa la potencia:");
	scanf("%d",&exx);

	r = pot(b,exx);
	printf("El resultado es: %.2f", r);

	return 1;
}
