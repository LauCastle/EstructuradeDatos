#include <stdio.h>
//Ordenamiento de burbuja

int arreglo[5];

void swap(int *x,int *y){
        int temp= *x;
        *x=*y;
        *y=temp;

}


void ordenamiento(int arreglo[5], int n){
        for(int i=0; i < n; i++){
                for(int j=i+1; j < n; j++){
                        if(arreglo[i]>arreglo[j]){
                                swap(&arreglo[i], &arreglo[j]);
                        }
                }
        }
}
void pantalla(int arreglo[], int n){
        for(int i=0; i < n-1; i++)
                printf("%d",arreglo[i]);
        printf("%d\n",arreglo[n-1]);

}
void busqueda_secuencial(int *arreglo, int n, int dato){//e es el dato y es el tam
        int pos=0;
        while(pos < n){
                if(arreglo[pos]==dato){
                        printf("El dato %d se encontro en la posicion:%d\n",dato, pos);
                        break;
                }else{
                        pos = pos+1;
                }
        }
        printf("No se encontro");

}


void main(){
        int n=5;


        //printf("Introduce el numero de enteros a ordenar:");
        //scanf("%d",&n);
 for(int i=0; i < n; i++){
                 printf("Introduce 5 enteros:");
                scanf("%d", &arreglo[i]);}
        printf("valores ordenados:");
        ordenamiento(arreglo, n);
        pantalla(arreglo,n);
        int dato = 7;
        busqueda_secuencial(arreglo,n,dato);
        //ordenamiento(arreglo, n);


}
