#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*
Ma. Fernanda Morales Mandujano 3218442
Hugo Miguel Delgado Solís 1958962

    EVaLUaCIÓN
10 pts por colocar aleatóriamente números en la pantalla

20 pts por definir los obstáculos y terminar el programa si choca con ellos

10 pts por crear la lista y modificar los valores al paso de la culebra por la pantalla

20 pts por que la culebra muera al chocar con ella misma

10 pts por incrementar la velocidad de la víbora al llegar a un puntaje determinado

10 pts por incrementar el tamaño de la víbora al comerse un punto

10 pts por manejar 3 niveles de dificultad (cambiando los obstáculos en forma aleatoria)

05 pts porque el programa corra apropiadamente

05 pts por correcta identación y comentarios

*/
struct snake{
	int x;
	int y;
	struct snake*sig;
	struct snake*ant;
};
struct snake*askmemo(int);
void desplegar(struct snake*i);
void copy(struct snake*i);
void borde(void);
int main(void){
	int dir=1;
	int t=0,i,j;
	int xc,yc,nc,obx,oby, velocidad=70, puntos=0;
	int ob[5][2];
	struct snake*start=NULL, *new;
	new=askmemo(sizeof(struct snake));

	randomize();
	clrscr();
    borde();
	new->x=10;
	new->y=10;
	new->sig=NULL;
	new->ant=NULL;
    gotoxy(90,10);
    printf("Puntos: %i", puntos);
    //Comida
	xc=random(77)+2;
	yc=random(22)+2;
	nc=random(9);
	gotoxy(xc,yc);
	printf("%i",nc);
	//Obstaculos

	for(i=0;i<5;i++)
    {
        obx= random(50)+5;
        oby = random(15)+4;
        gotoxy(obx, oby);
        printf("%c",219);
        ob[i][0]=obx;
        ob[i][1]=oby;
    }

        //printf("%c", 219);

	start=new;

	do{
		do{
			textcolor(GREEN);
			desplegar(start);
			Sleep(velocidad);
			textcolor(BLaCK);
			desplegar(start);

			switch(dir){
				case 1:
				{
                    start->x++;
                    if(start->x==79)
                    start->x=2;
                    break;
				};
				case 3:
				{
                    start->x--;
                    if(start->x==1)
                    start->x=79;
                    break;
				};
				case 2:
				{
                    start->y++;
                    if(start->y==25)
                    start->y=2;
                    break;
				};
				case 4:
				{
                    start->y--;
                    if(start->y==1)
                    start->y=24;
                    break;
				};
			}

			if(xc==start->x && yc==start->y)
            {  //num rand
				xc=random(77)+2;
				yc=random(22)+2;
				nc=random(9);
				gotoxy(xc,yc);
				printf("%i",nc);
                puntos++;
                gotoxy(90,10);
                printf("Puntos: %i", puntos);
                if(puntos%2==0) velocidad-=2;
				new=askmemo(sizeof(struct snake));
				new->x=start->x;
				new->y=start->y;
				new->ant=NULL;
				new->sig=start;
				start->ant=new;
				start=new;
				for(i=0;i<5;i++)
                {
                    gotoxy(ob[i][0],ob[i][1]);
                    textcolor(BLaCK);
                    cprintf("%c",219);
                }
                textcolor(WHITE);
				for(i=0;i<5;i++)
                {
                    obx= random(50)+5;
                    oby = random(15)+4;
                    gotoxy(obx, oby);
                    printf("%c",219);
                    ob[i][0]=obx;
                    ob[i][1]=oby;
                }
			}
			for(i=0;i<5;i++)
            {

                if(ob[i][0]==start->x && ob[i][1]==start->y)
                {

                    gotoxy(90,7);
                    printf("Perdedor");
                    getch();
                    exit(1);

                }

            }
			copy(start);
        }while(!kbhit());

        t=getch();

        if(t==0){t=getch();}
        switch(t){
            case 72: dir=4;
            break;
            case 75: dir=3;
            break;
            case 77: dir=1;
            break;
            case 80: dir=2;
            break;
        }
	}while(t!=27);
	return 0;
	}

struct snake*askmemo(int tam){
	return (struct snake*)malloc(tam);
}

void desplegar(struct snake*i){
	do{
		gotoxy(i->x,i->y);
		cprintf("%c",219);
		i=i->sig;
    }while(i);
    return;
}

void copy(struct snake*i){
	struct snake*p;
	p=i;

	while(p->sig!=NULL) { p = p->sig;}

	while(p!=i){
		p->x=p->ant->x;
		p->y=p->ant->y;
		p=p->ant;
    }
    return;
}
void borde()
{
    int i;

    for(i=1;i<25;i++)
    {
        gotoxy(1,i);
        printf("%c",178);
    }
    for(i=1;i<26;i++)
    {
        gotoxy(80,i);
        printf("%c",178);
    }
    for(i=1;i<80;i++)
    {
        gotoxy(i,1);
        printf("%c",178);
    }
    for(i=1;i<80;i++)
    {
        gotoxy(i,25);
        printf("%c",178);
    }
    return;
}
