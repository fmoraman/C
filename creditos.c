#include <stdio.h>
#include <conio.h>
#include <windows.h>
void creditos (void);
int main (void)
{
creditos();
return 0;
}

void creditos (void)
{
int y = 25;
do{
if (y>20)
	{
	textcolor(WHITE);
	}
	else if (y>14)
		{
		textcolor (LIGHTGRAY);
		}
		else if (y>6)
			{
			textcolor(DARKGRAY);
			}
			else
				{
				textcolor (BLACK);
				}
gotoxy(35,y);
cprintf("Fernanda Morales 3218442");
Sleep(150);
textcolor(BLACK);
gotoxy(35,y);
cprintf("Fernanda Morales 3218442");
} while (--y>1);

return ;
}




