//6. Faça um programa que receba um número inicial e uma razão, imprima os 10 primeiros
//números em uma sequência de progressão geométrica. 
#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int a,n1,r;
	printf("\n Informe o numero inicial: ");
	scanf("%d", & n1);
	printf("\n Informa a razão: ");
	scanf("%d",& r);
	
	for(a=0;a<10;a++)
	{
		n1=(n1*r);
	 printf("\n %d", n1);
	}

	
}
