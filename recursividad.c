#include <stdio.h>
//Recursividad 1. caso base 2. caso recursivo
long factorial();

int main (void){
	int numero;
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	printf("El factorial del numero es %i",factorial(numero));
	
	return 0;
}

/*

4!= 4*3!
3!=3*2!
2!=2*1!
1!=1

4*6=24
3*2
2*1
1
*/
long factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return(n*factorial(n-1));
	}
}
