#include <stdio.h>
#include <stdlib.h>

//Estructura de Datos 3°D
//Insertion Sort
int a[10];


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

void leer_archivo(){
	FILE* archivo;
	char texto[20];
	char c;
	int j=0;
	int i=0;

	archivo = fopen("datos.txt", "rt");
	do{
		c = fgetc(archivo);
		if(c == ','){
			a[j] = atoi(texto);
			j++;
			for(int z=0; z<i; z++)
				texto[z]=0;
			i=0;
			continue;
		}
		texto[i] = c;
		i++;
	}while(c!=EOF);
}

void pantalla(int a[], int n){
	for(int j=0; j<n-1; j++)
		printf("%d, ", a[j]);
	printf("%d\n", a[n-1]);
}

void busqueda(int A[], int n){
	int r=0;
	printf("¿Que numero quiere buscar? ");
	scanf("%d",&r);

	for(int i = 0; i < n; i++){
               if(A[i]==r){
        	printf("el lugar es %d \n",i);
		break;
	       }
	}
	printf("no existe el numero");          
	
}

void main(){
	int t=10;
	int num=0;
	int pos=0;

	leer_archivo(a,t);

	//printf("\nValores desordenados: ");
	pantalla(a,t);
	bubbleSort(a,t);
	//insertion_sort(a,t);
	//quicksort(a,0,t-1);
	//printf("\nValores ordenados: ");
	pantalla(a,t);
	//printf("¿Que numero deseas buscar? \n");
	//scanf("%d",&num);
	busqueda(a,t);
	

	//Busqueda...
	//printf("Encrontre el numero en la posicion %d\n",pos);
}
