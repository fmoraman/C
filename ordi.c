/*Suponga que el tren ligero de la ciudad de Guadalajara es revisado constantemente con cámaras cada uno de los vagones 
para reducir el índice de delincuencia evitando que haya  pasajeros parados en cada vagón. Si un vagon tiene más de 30 pasajeros, 
la puerta no cierra hasta que los que van parados o sentados en el piso, bajen de ese vagón. 
ayude al conductor del tren a revisar por medio de un programa aquellos vagones que deben conservar la puerta abierta. 
En total son 10 vagones, Calcule aleatoriamente el número de pasajeros e indique cuáles puertas se cierran y cuáles se mantienen abiertas. 
Esta acción debe repetirse en los 15 puntos de carga y descarga de pasajeros.

Si realiza el programa sin arreglos y sin funciones, tiene 20 puntos

si tiene funciones con parámetros son 13 puntos más

si utiliza arreglos vale 32 puntos*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void vagon(int peo[35]);
void estaciones(int dia, int x, int y);

int main(void)
{
	int e,f;
	int place[35];
	
	for(f=0;f<15;f++){
	printf("Vagones");
	estaciones(f+1,4,2);	
	vagon(place);
	
	for(e=0;e<10;e++){

    
	if(place[e]>30){
		printf("\n");
	printf(" %i     Bajar pasajeros, vagon lleno ",e+1);
    }

else {
	printf("\n");
printf(" %i     Vagon listo ",e+1);}
	
	}
	getch();
	clrscr();
	}
	return ;
}

void vagon(int peo[35]){
	int i;
	for(i=0;i<35;i++){
		
	peo[i]=random(35);
	}
	return;
}

void estaciones(int dia, int x, int y){
	gotoxy(x,y);
	if(dia==1)
		printf("Estacion 1");
	else if(dia==2)
		printf("Estacion 2");
	else if(dia==3)
		printf("Estacion 3");
	else if(dia==4)
		printf("Estacion 4");
	else if(dia==5)
		printf("Estacion 5");
	else if(dia==6)
		printf("Estacion 6");
	else if(dia==7)
		printf("Estacion 7");
	else if(dia==8)
		printf("Estacion 8");
	else if(dia==9)
		printf("Estacion 9");
	else if(dia==10)
		printf("Estacion 10");
	else if(dia==11)
		printf("Estacion 11");
	else if(dia==12)
		printf("Estacion 12");
	else if(dia==13)
		printf("Estacion 13");
	else if(dia==14)
		printf("Estacion 14");
	else if(dia==15)
		printf("Estacion 15");
return;
}
