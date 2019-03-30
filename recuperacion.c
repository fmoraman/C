//Un hotel muy importante de la ciudad ofrecerá descuentos por temporada vacacional.
//El costo de una habitación doble tiene un precio normal de 1,200 y sencilla de $800.
//El costo bajará si la persona reserva 3 noches un 20% y 35% si se queda 5 días o más. 
//Elabore un programa que pida el tipo de habitación que desea el cliente, 
//el número de días de estancia y le calcule el monto a pagar por todos los días reservados.
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 char room;
 int d=1200;
 int n=800;
 int dia;
 
 int totalD;
 int totalN;
 int totalNdes3;
 int totalNdes5;
 int totalDdes3;
 int totalDdes5;
 //Pregunta habitación
 printf("Que tipo de habitacion desea reservar doble(d) o normal(n)?");
 scanf("%c",&room);
 fflush(stdin);
 printf("Cuantos dias desea reservar?");
 scanf("%i",&dia);
 fflush(stdin);
 //Obtiene descuentos
  totalD=dia*d;
  totalN=dia*n;
  totalNdes3=(totalN)-(totalN*0.20);
  totalNdes5=(totalN)-(totalN*0.35);
  totalDdes3=(totalD)-(totalD*0.20);
  totalDdes5=(totalD)-(totalD*0.35);
 //Reply
 if(room=='n' && dia<3)
 {
	 printf("No aplica descuento, su total es:");
 	    printf("%i",totalN);
 }
    else if(room=='d' && dia<3)
	{
	 printf("No aplica descuento, su total es:");
 	    printf("%i",totalD);
	}
    else if(room=='n' && dia>=3 && dia<5)
	{
		printf("Se le aplicara un descuento del 20%, su total es:");
		    printf("%i",totalNdes3);
	}
	else if(room=='n' && dia>=5)
	{
		printf("Se le aplicara un descuento del 35%, su total es:");
		    printf("%i",totalNdes5);
			}
	else if(room=='d' && dia>=3 && dia <5)
	{
		printf("Se le aplicara un descuento del 20%, su total es:");
		    printf("%i",totalDdes3);
	}
	else if(room=='d' && dia>=5)
	{
		printf("Se le aplicara un descuento del 35%, su total es:");
	    printf("%i",totalDdes5);
	}
	
	return;
}

 
 