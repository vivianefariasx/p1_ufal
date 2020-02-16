//Faça um programa que imprima a tabuada de um número qualquer informado pelo usuário, por
//exemplo, digitando 8, o programa deverá retornar a tabuada do número 8. 
#include<stdio.h>

int main ()
{

int a,c;
    printf("\n Informe a casa da tabuada: ");
    scanf("%d",& c);
   for(a=1;a<=10;a++)
   {
   	printf("\n %dX %d=%d",c,a,c*a);
   }
   }
