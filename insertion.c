#include <stdio.h>

//Estructura de Datos 3°D
//Insertion Sort

void interSort(int a[], int n){
	for(int i=0; i<n; i++){
		int key=a[i];
		int j=i-1;

		while(key<a[j] && j>=0){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]= key;
	}
}

void bubbleSort(int a[], int n){

	for(int i=1; i<n; i++){
		for(int j=0; j<n-1;j++){
			if(a[j]>a[j+1]){
				int temp= a[j];
				a[j]=a[j+1];
				a[j+1]= temp;
			}
		}
	}
	
}

void pantalla(int a[], int n){
	for(int j=0; j<n-1; j++)
		printf("%d, ", a[j]);
	printf("%d\n", a[n-1]);
}

void main(){
	int t=0;
	printf("Ingrese los numeros a permutar: ");
	scanf("%d",&t);

	int a[t];
	for(int i=0; i<t; i++){
		printf("Ingrese el valor de %d: ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\nValores desordenados: ");
	pantalla(a,t);
	bubbleSort(a,t);
	printf("\nValores ordebados: ");
	pantalla(a,t);
	printf("\n\n");
}

