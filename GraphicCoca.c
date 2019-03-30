#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void ejes(int, int);
void barra(int num, int x, int y);
void ventas(char tienda[50]);
void dias(int, int, int);
int suma(const char[50]);

int main(void)
{
	int i,r,e;
    char tienda[50];
    randomize();
    
	for(e=0;e<6;e++)
	{
	clrscr();
	ventas(tienda);
    ejes(5,5);
	dias(e+1,35,5);
	r=suma(tienda);
	gotoxy(70,15);
	printf("%i cajas",r);

    for(i=0;i<50;i++)
	{
		barra(tienda[i],6+i,21);
	}
	getch();
	}
	
	
	
return;
}
void ventas(char tienda[50])
{
	int i;
	
	for(i=0;i<50;i++)
	{
	tienda[i]=random(13)+2;
	//printf("%i ", tienda[i]);
	}
	
return;
}

void ejes(int x, int y)
{
	int xf=x+50;
	int yf=y+16;
	
	for(;y<=yf;y++)
	{
		gotoxy(x,y);
	    printf("%c",179);
	}
	for(;x<=xf;x++)
	{
		gotoxy(x,y);
	    printf("%c",196);
	}
	gotoxy(5,22);
	printf("%c",192);
	
	
	return ;
}

void barra (int num, int x, int y)
{
	textcolor(num);
	for(;num>0;num--)
	{
	    gotoxy(x,y--);
	    cprintf("%c",219);
	
	}
	
	return ;
}

void dias(int dia, int x, int y)
{
	gotoxy(x,y);
	if(dia==1)
		printf("Lunes");
	else if(dia==2)
		printf("Martes");
	else if(dia==3)
		printf("Miercoles");
	else if(dia==4)
		printf("Jueves");
	else if(dia==5)
		printf("Viernes");
	else if(dia==6)
		printf("Sabado");
	
return;
}

int suma(const char tienda[50])
{
	int total=0, i;
	
	for(i=0;i<50;i++)
		total=total+tienda[i];
	
	return total;
}

	
	