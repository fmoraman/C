#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int operation(int n1, int n2, char opt);
void PUSH (char PILa[10],int*tope,char dato);
char POP (char PILa[10],int*tope);
void imprimepila(char *pila, int tope);

int main(void){
        int i,tope=0;
        char PILa[10],e1,e2;
        char exp[5]="23-5*";
        int resultado=0;

        for(i=0;i<5;i++){

                if(exp[i]>='0' && exp[i]<='9'){
                        PUSH(PILa,&tope,exp[i]);
                        printf("Pushing %c\n", exp[i]);
                }
                if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/'){
                        e1=POP(PILa,&tope);
                        e2=POP(PILa,&tope);
                        printf("Popping %c & %c\n", e1,e2);
                        resultado=operation(e1-'0',e2-'0',exp[i]);
                        printf("Resultado parcial: %d\n",resultado);
                        PUSH(PILa,&tope,resultado+'0');
                }
        imprimepila(PILa,tope);
        }
        printf("Resultado final: %c", resultado+'0');
        return resultado;
}

void imprimepila(char *pila, int tope) {
	int i;
        printf("Stack --> ");
        for(i=tope-1;i>=0;i--) {
                printf(" | %c | ", pila[i]);
        }
        printf("\n");
}

int operation(int n1, int n2, char opt) {
        int r=0;
        if(opt=='*') r= n1*n2;
        if(opt=='-') r= n1-n2;
        if(opt=='+') r= n1+n2;
        if(opt=='/') {
                if(n2!=0) r= n1/n2;
        }
        return r;
}
	
void PUSH (char PILa[10],int*tope,char dato)
{
        PILa[*tope]=dato;
        (*tope)++;
        return;
}

char POP (char PILa[10],int*tope)
{
        (*tope)--;
        return PILa[*tope];
}