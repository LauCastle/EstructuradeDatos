#include <stdio.h>

//Estructura de Datos 3°D
//Insertion Sort

void intercambio(int *x, int *y)// en ingles swap().
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int particion(int a[], int izq, int der){
	int pivote = a[izq];
		while(1){
			while(a[izq]<pivote){ //compara todos los elementos a la izquierda
				izq++;
			}
			while(a[der]>pivote){ //compara todos los elementos a la derecha
				der--;
			}
			if(izq >= der){
				return der;
			}else{
				intercambio(&a[izq], &a[der]);
				izq++;
				der--;	
			}
		}
}

void quicksort(int a[], int izq, int der){
	if(izq < der){
		int indice_de_particion = particion(a, izq, der);
		quicksort(a, izq, indice_de_particion);
		quicksort(a, indice_de_particion+1, der);
	}
}

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
	for(int i=1; i<n; i++)
		for(int j=0; j<n-1;j++)
			if(a[j]>a[j+1])
				intercambio(&a[j],&a[j+1]);
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
	//bubbleSort(a,t);
	//insertion_sort(a,t);
	quicksort(a,0,t);
	printf("\nValores ordenados: ");
	pantalla(a,t);
	printf("\n\n");
}

