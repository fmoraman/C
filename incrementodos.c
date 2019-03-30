//Elabore una función que reciba dos números e imprima una serie de 20 valores comenzando por el primer número 
//e incrementándose según lo indique  el 2o número

#include <conio.h>
#include <stdio.h>



int main(void)
{
	int num1, num2,res;
	printf("Ingrese el primer numero:");
	scanf("%i",&num1);
	printf("Ingrese el segundo numero:");
	scanf("%i",&num2);
	
	
	
	for(res=num1+num2;res<100;res=res+num2)
	
		printf("%i ",res);
	
	return 0;
}

		