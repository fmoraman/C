#include <conio.h>

#define ESC 27
//la letra c realiza el cambio de color
int main(void)
{
	int x=40, y=12, color=RED;
	char tecla;
	clrscr();
	do{
	
	
		gotoxy(x,y);
		cprintf("%c",219);
		tecla=getch();
		
		if(tecla==0)
			tecla=getch();
			
		switch(tecla)
		{
			case 72: y--;
						break;
			case 80: y++;
						break;
			case 77: x++;
						break;
			case 75: x--;
						break;
			case 'c':
			case 'C': textcolor(++color);
						break;
		}
	}while(tecla!=ESC);
return 0;
}

  