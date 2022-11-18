#include <stdio.h>
#include <stdlib.h>
//prueba para el examen
//estructura de datos
int a[10];

void intercambio(int *x, int *y)
{
	int temp= *x;
	*x=*y;
	*y=temp;
}

void exchange(int a[], int n){
	for(int i=1; i=n ; i++){
		for(int j=i+1; j=n; j++){
			if(a[i]>a[j])
				intercambio(&a[i], &a[j]);
		}
	}
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

void main(){
        int t=10;
	leer_archivo(a,t);
        printf("\nValores desordenados: ");
        pantalla(a,t);
        //bubbleSort(a,t);
        //insertion_sort(a,t);
	// quicksort(a,0,t-1);
        exchange(a,t);
	printf("\nValores ordenados: ");
        pantalla(a,t);
        printf("\n\n");
}


