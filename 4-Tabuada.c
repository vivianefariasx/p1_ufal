//Fa�a um programa que imprima a tabuada de um n�mero qualquer informado pelo usu�rio, por
//exemplo, digitando 8, o programa dever� retornar a tabuada do n�mero 8. 
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
