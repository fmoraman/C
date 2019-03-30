#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
  int x,y,color;

clrscr();

 do{
    x=random(80);
    y=random(25);
    color=random(15);
    gotoxy(x,y);
    textcolor(color);
    Sleep(400);
    cprintf("hi");

}while(!kbhit());

  

return 0;
}
