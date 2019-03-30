#include <windows.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
 int dir=1;
 int x=5,y=5;

 
  do{
	   gotoxy(x,y);
	   textcolor(CYAN);
       cprintf("o");
       Sleep(50);
	   
     switch(dir)
	 {
	 case 1: if(y==25)
		     dir=2;
		    else if(x==80)
			 dir=4;
		    else
		    {
			 x++;
			 y++;
		    }
		    clrscr();
		    break;
		 
		 
		 
	 case 2: if(x==80)
			     dir=3;
			 else 
				 if(y==1)
				 dir=1;
			 else
			 {
				 x++;
				 y--;
			 }
				 
			 clrscr();
			 break;
			 
			 
	 case 3: if(y==1)
				 dir=4;
			 else
				 if(x==1)
					 dir=2;
			 else{
				 x--;
				 y--;
			 }
			 clrscr();
			 break;
			 
			 
	case 4: if(x==1)
				 dir=1;
			 else
				 if(y==25)
					 dir=3;
			 else{
				 x--;
				 y++;
			 }
			 clrscr();
			 break;
			 
	 }

	 

	  }while(!kbhit());
	  
	  
	  
return 0;
}