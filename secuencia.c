//Examen estructura de Datos
//Problema 2. Secuencia geométrica

#include <stdio.h>

int sus(int ini, int i){
	int razon=3;

	if(i>0)
	{
		return razon*sus(ini,i-1);
	}
	else{
		return 5;
	}
}

int main(){
	int n=0;
	int res=0;
	int razon= 3;
	int ini=5;

	printf("Ingrese el numero de iteraciones: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
		printf("%d ", sus(razon,i));
	}
	printf("\n");
	printf("Numero de repeticiones = %d\n",n);

	return 0;

}
