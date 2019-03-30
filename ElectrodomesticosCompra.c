#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void)
{
	char cash,s,n,answ;
	int thing,x,y;
	randomize();
	 
	printf("El pago sera con efectivo? Si(s)/No(n)");
	fflush(stdin);
	scanf("%c",&answ);
	
	//"¡Muchas felicidades! con la compra de su pantalla, ha conseguido un dvd y una licuadora gratis!";
	//"Muchas felicidades! con la compra de su pantalla, ha obtenido otra television gratis!";
	//"¡Felicidades! con la compra de su refrigerador, ha obtenido tambien un horno de microondas y una plancha completamente gratis!";
    //"¡Muchas felicidades! con la compra de su refrigerador, ha conseguido tambien una licuadora y una olla completamente gratis!";
	//"Debido a que decidio realizar el pago con tarjeta, su pago se realizara a 30 meses sin intereses!";
	//"Debido a que decidio realizar el pago con tarjeta, su pago se realizara a 30 meses sin intereses!";
	
	if(answ=='s')
	{
        printf("Teclee el numero 1 si desea adquirir la pantalla, o 2 si desea adquirir el refrigerador");
	    scanf("%i",&thing);
		
		
		if(thing==1)
		{
			x=random(1);
	    if(x==0)
			printf("¡Muchas felicidades! con la compra de su pantalla, ha conseguido un dvd y una licuadora gratis!");
		else if(x==1)
			printf("Muchas felicidades! con la compra de su pantalla, ha obtenido otra television gratis!");
		}
		
		if(thing==2)
		{
			x=random(1);
		if(x==0)
			printf("Felicidades! con la compra de su refrigerador, ha obtenido tambien un horno de microondas y una plancha completamente gratis!");
		else if(x==1)
			printf("Muchas felicidades! con la compra de su refrigerador, ha conseguido tambien una licuadora y una olla completamente gratis!");
		
		}
	}
		if(answ=='n')
		{
	    printf("Teclee el numero 1 si desea adquirir la pantalla, o 2 si desea adquirir el refrigerador");
	    scanf("%i",&thing);
		
		if(thing==1)
		{
		   y=random(1);
	    if(y==0)
			printf("Debido a que decidio realizar el pago con tarjeta, su pago se realizara a 30 meses sin intereses!");
		else if(y==1)
			printf("Debido a que decidio realizar el pago con tarjeta, su pago se realizara a 25 meses sin intereses!");
		}
		if(thing==2)
		{
		y=random(1);
		
	    if(y==0)
			printf("Debido a que decidio realizar el pago con tarjeta, su pago se realizara a 30 meses sin intereses!");
		else if(y==1)
			printf("Debido a que decidio realizar el pago con tarjeta, su pago se realizara a 25 meses sin intereses!");
		}
		
	}
	 
		
	
				
		
		return ;
		}
		
			
			
		