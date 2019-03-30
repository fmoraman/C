/*
En un estacionamiento se tienen 25 cajones disponibles. 
5 de ellos están reservados para minusválidos. Estos lugares se calculan como múltiplos de 5.
El costo por hora es de $12 pesos para cajones normales y de $7 para cajones especiales.

Elabore un programa que permita localizar el primer cajón disponible, desplegarle al usuario y darle el costo por hora.
El usuario puede elegir el tipo de cajón. 

Utilice un arreglo para simular el estacionamiento y coloque en el lugar elegido, la hora de llegada.
Utilice los decimales para marcar la fracción de la hora. 1.35 equivale a 1:35

Valide que sea una hora correcta.

al salir del estaciomiento el usuario le dará el número de cajón asignado y la hora de salida. 
El programa calculará el costo a pagar redondeando la(s) hora(s) calculada(s) de estadia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipos
int place(int s[5][5]);
int apart(int f,int c);
float timee(float e, float s);


int main(void){
	int lugares[5][5]={{8,8,8,8,8},
	                   {0,0,0,0,0},
					   {0,0,0,0,0},
					   {0,0,0,0,0},
	                   {0,0,0,0,0}};
	int fila,x,col,z;
	float a,hf,res,tiempo;
    
	
	do{
	textcolor(YELLOW);	
	printf("\n");
	cprintf("Cajones disponibles normales en 0 \n");
	printf("\n");
	cprintf("Cajones especiales en 8 \n");
	printf("\n");
	cprintf("Cajones ocupados en 1 \n");
	printf("\n");
	
	x=place(lugares);
	printf("%i",x);
	
	
	printf("\n");
	printf("Fila:");
	scanf("%i",&fila);
	printf("Columna:");
	scanf("%i",&col);
	
	

	clrscr();
	
	if(lugares[0][0]){
	printf("Cajon normal $12xhora \n");}
	if(lugares[8][8]){
	printf("Cajon especial $7xhora \n");}
   	
	
	lugares[fila][col]=1;
	
	
	
	
	x=place(lugares);
	printf("%i",x);
	
	z=apart(fila,col);
	printf("%i",z);
	
	do{
	printf("Ingrese hora de llegada: ");
	scanf("%f",&a);
	printf("Ingrese hora de salida: ");
	scanf("%f",&hf);
	
	if(a>24){
	printf("Hora no valida \n");}
	if(hf<a){
	printf("Hora no valida \n");}
	}while(hf<a);
	
	tiempo=hf-a;
	res=timee(a,hf);
	
	printf("Cantidad de horas: %f \n",tiempo);
	printf("Total a pagar: %f \n",res);
	getch();
	clrscr();
	}while(!kbhit());
	
	
	
	return;
}
//Funcion para poner el estacionamiento
int place (int s[5][5]){
	int j, i;
	for(j=0;j<5;j++)
	{
		
		for(i=0;i<5;i++)
		printf("%i",s[j][i]);
		printf("\n");
	}
	return  ;
	
}
//Funcion para saber el lugar apartado
int apart(int f, int c){
	textcolor(CYaN);
	cprintf(" <-Lugar ocupado en la fila %i \n",f);
	printf("\n");
	cprintf("Y en la columna %i \n",c);
	printf("\n");
	return ;
	
}
//Funcion que nos devuelve el total de acuerdo al tipo de cajon y el numero de horas
float timee(float e, float s){
	float totn,tote;
	char cajon;
	totn=12*(s-e);
	tote=7*(s-e);
	
		
	printf("Lugar ocupado normal(n) o especial(e)? \n");
	fflush(stdin);
	scanf("%c",&cajon);
	
	if(cajon=='n')
		return totn;
	else
		return tote;
	
	
	//Normal 12 x hora
	//Especial 7 x hora
	
	
	
}

		
	
	
	
	
	
	





	
