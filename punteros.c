//Estructura de datos
//Punteros 

#include <stdio.h>

int main(){
	double num1, num2;
	double *ptr1, *ptr2, *tmp;

	ptr1= &num1;
	ptr2= &num2;

	num1= 10;
	num2= 20;
	
	printf("\n Num1: %d, Num2: %d\n\n ", num1, num2);


	tmp= ptr1;
	ptr1= ptr2;
	ptr2= tmp;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	//printf("\n Ptr1: %d, Ptr2: %d\n\n", *ptr1, *ptr2);

	return 0;
}
