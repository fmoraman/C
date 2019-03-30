#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*Color de consola :
0 = Negro
1 = Azul
2 = Verde
3 = Aguamarina
4 = Rojo
5 = Purpura
6 = Amarillo
7 = Blanco
8 = Gris
9 = Azul claro
 
Color de texto:
A = Verde claro
B = Aguamarina claro
C = Rojo claro
D = Purpura claro
E = Amarillo claro
F = Blanco brillante*/
int main(void)
{
	char text;
	int screen,x;
	
	printf("Ingrese una letra (A-F) para elegir el color del texto:");
	scanf("%c",&text);
	printf("Ingrese un numero (0-9) para elegir el color de consola:");
	scanf("%i",&screen);
	printf("Al finalizar escriba en el cmd cls para ver los cambios");
	x=screen*16+text;
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),x); 
	
	

	
return;
}