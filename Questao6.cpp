//6. Fa�a um programa que receba um n�mero inicial e uma raz�o, imprima os 10 primeiros
//n�meros em uma sequ�ncia de progress�o geom�trica. 
#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int a,n1,r;
	printf("\n Informe o numero inicial: ");
	scanf("%d", & n1);
	printf("\n Informa a raz�o: ");
	scanf("%d",& r);
	
	for(a=0;a<10;a++)
	{
		n1=(n1*r);
	 printf("\n %d", n1);
	}

	
}
