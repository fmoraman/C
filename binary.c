#include <stdio.h>
//Numero entero a binario
void binario(int n);

int main(void){
	int num;
	
	do{
		
		printf("Digite un numero: ");
	    scanf("%i",&num);
		
	}while(num<0);
	
	binario(num);
	
	return 0;
}

void binario(int n){
	if(n>1)binario(n/2);
	printf("%i", n%2);
}
