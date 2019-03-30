#include <stdio.h>
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();
int main(void){
	menu();
	return 0;
}

void menu(){
	int opc;
	
	do{
		printf("\n 1. Suma");
		printf("\n 2. Restar");
		printf("\n 3. Multiplicar");
		printf("\n 4. Dividir");
		printf("\n 5. Salir");
		printf("\n Opcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: sumar();break;
			case 2: restar(); break;
			case 3: multiplicar(); break;
			case 4: dividir(); break;
		}
	
	}while(opc != 5);
}

void sumar(){
	int n1, n2, suma=0;
	printf("Digite dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	suma=n1+n2;
	
	printf("\n La suma es %i",suma);
	
}
void restar(){
	int n1, n2, resta=0;
	printf("Digite dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	resta=n1-n2;
	
	printf("\n La resta es %i",resta);
}
void multiplicar(){
	int n1, n2, mult=0;
	printf("Digite dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	mult=n1*n2;
	
	printf("\n La multiplicacion es %i",mult);
}
void dividir(){
	int n1, n2, div=0;
	printf("Digite dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	div=n1/n2;
	
	printf("\n La division es %i",div);
}
