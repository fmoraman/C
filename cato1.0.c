#include <stdio.h>
#include <conio.h>
#include <windows.h>
//SE QUE ODIA VARIABLES GLOBALES, PERO TENIA PRISA Y NO ENCONTRABA MI TRABAJO EN CLASE
char posicion[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checaVictoria(void);
void tablero(void);

int main()
{
    int jugador = 1, i, casilla;
    char marca;
    do
    {
        tablero();
        jugador = (jugador % 2) ? 1 : 2;
        gotoxy(0,15);
        printf("\n\rJugador %d, introduce un numero:  ", jugador);
        scanf("%d", &casilla);
        //ENCONTRÉ UNA MANERA DE PONER UN IF ELSE CON OPERADORES!
        //BIBLIOGRAFÍA: https://www.tutorialspoint.com/cprogramming/c_operators.htm
        //SI JUGADOR ES IGUAL A 1, ENTONCES MARCA TENDRÁ 'X'; SI NO, ENTONCES TENDRÁ 'O'
        marca = (jugador == 1) ? 'X' : 'O';
        //TODOS LOS CASOS EN LOS QUE PUEDE EXISTIR UNA X/O Y ASEGURANDO QUE SEA VALIDO
        if (casilla == 1 && posicion[0] == '1')
        {
            posicion[0] = marca;
        }
        else if (casilla == 2 && posicion[1] == '2')
        {
            posicion[1] = marca;
        }
        else if (casilla == 3 && posicion[2] == '3')
        {
            posicion[2] = marca;
        }
        else if (casilla == 4 && posicion[3] == '4')
        {
            posicion[3] = marca;
        }
        else if (casilla == 5 && posicion[4] == '5')
        {
            posicion[4] = marca;
        }
        else if (casilla == 6 && posicion[5] == '6')
        {
            posicion[5] = marca;
        }
        else if (casilla == 7 && posicion[6] == '7')
        {
            posicion[6] = marca;
        }
        else if (casilla == 8 && posicion[7] == '8')
        {
            posicion[7] = marca;
        }
        else if (casilla == 9 && posicion[8] == '9')
        {
            posicion[8] = marca;
        }
        else
        {
            printf("Movimiento invalido! ");
            jugador--;
            Sleep(500);
        }
        i = checaVictoria();
        jugador++;
    }while (i ==  - 1);

    tablero();
    //MENSAJE DE VICTORIA O EMPATE
    if (i == 1)
    {
        gotoxy(0,19);
        printf("\n\n==>\aJugador %d win ", --jugador);
    }
    else
    {
        gotoxy(0,19);
        printf("\n\n==>\aEmpate!");
    }


    getch();

    return 0;
}

/**
MI FUNCION CHECA SI HUBO VICTORIA
ESTA REGRESA:
1 SI EL JUEGO TERMINÓ CON ALGÚN RESULTADO
-1 SI EL JUEGO SIGUE EN PROGRESO
O SI EL JUEGO TERMINÓ PERO CON EMPATE
 **/

int checaVictoria()
{
    if (posicion[0] == posicion[1] && posicion[1] == posicion[2])
    {
        return 1;
    }
    else if (posicion[3] == posicion[4] && posicion[4] == posicion[5])
    {
        return 1;
    }
    else if (posicion[6] == posicion[7] && posicion[7] == posicion[8])
    {
        return 1;
    }
    else if (posicion[0] == posicion[3] && posicion[3] == posicion[6])
    {
        return 1;
    }
    else if (posicion[1] == posicion[4] && posicion[4] == posicion[7])
    {
        return 1;
    }
    else if (posicion[2] == posicion[5] && posicion[5] == posicion[8])
    {
        return 1;
    }
    else if (posicion[0] == posicion[4] && posicion[4] == posicion[8])
    {
        return 1;
    }
    else if (posicion[2] == posicion[4] && posicion[4] == posicion[6])
    {
        return 1;
    }
    else if (   posicion[0] != '1' && posicion[1] != '2' && posicion[2] != '3'
             && posicion[3] != '4' && posicion[4] != '5' && posicion[5] != '6'
             && posicion[6] != '7' && posicion[7] != '8' && posicion[8] != '9')
    {
        return 0;
    }
    return -1;
}

void tablero()
{
    int i,y = 8, x = 0;
    clrscr();
    printf("\n\n\tGato\n\n");
    printf("Jugador 1 (X)  -  Jugador 2 (O)\n\n\n");
    for(i = 0; i<8;i++)
    {
        gotoxy(5,y);
        printf("%c", 219);
        gotoxy(10,y);
        printf("%c", 219);
        y++;
    }
    for(i = 0; i<15;i++)
    {
        gotoxy(x,10);
        printf("%c", 219);
        gotoxy(x,13);
        printf("%c", 219);
        x++;
    }
	/**
	AQUÍ ESTOY PONIENDO LOS NUMEROS INICIALES Y LAS X/O 
	**/
    gotoxy(2,8);
    printf("%c", posicion[0]);
    gotoxy(7,8);
    printf("%c", posicion[1]);
    gotoxy(12,8);
    printf("%c", posicion[2]);

    gotoxy(2,11);
    printf("%c", posicion[3]);
    gotoxy(7,11);
    printf("%c", posicion[4]);
    gotoxy(12,11);
    printf("%c", posicion[5]);

    gotoxy(2,14);
    printf("%c", posicion[6]);
    gotoxy(7,14);
    printf("%c", posicion[7]);
    gotoxy(12,14);
    printf("%c", posicion[8]);

    gotoxy(12,15);
    printf(" ");
    gotoxy(11,15);
    printf(" ");
    return;
}
