#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

const double euler = 2.71828182845904523536;

/**Seja uma solução cos(x)-x e os extremos do intervalo de busca, [a,b]
  onde f(a)*f(b)<0. Pede-se o número de interações para se encontrar a
  raiz.
*/

//Função retorna o valor da expressão em float
float f(float x){
    return (1-(1+x+((x**2)/2))*(euler**(-x))); // Basta modificar a expressao
}

// Bloco principal
void main(){
    float a,b,c,x,xx,xy;
    int n,i;

    do{
        clrscr();
        printf("\t\t\tPROGRAMA DA BISSECCAO\n\n");
        printf("\n\n\tRaiz A: ");
        scanf("%f",&a);
        printf("\n\tRaizB: ");
        scanf("%f",&b);
        c=abs(f(a)*f(b));
        printf("\n\tInteracoes ");
        scanf("%d",&n);
    }while(m<0 || n <= 0);

        //Interação é feita nesse bloco
    for(i=1;i<=n;i++){
        x=((a+b)/2);
        xx=abs(f(a)*f(x));
        printf("\n\t%d  %f  %f  %f",i,a,x,b);
        if(xx<0) 
            a=x;
        else     
            b=x;
    }
    //Resultados
    printf("\n\n\tApos %d interacoes a raiz e %f",n,x);
    getch();
}