//1. Fa�a um programa que receba um intervalo de dois n�meros e mostre como resultado
//a soma de todos os n�meros dentro do intervalo. 

#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int n1,a,n2,soma=0;
	printf("\n Informe o numero de inicio: ");
	scanf("%d", & n1);
	printf("informe o numero do final: ");
	scanf("%d",& n2);
	for(a=n1;a<=n2;a++)
	{ 
	    soma=soma+a;
	}
	printf("\n A soma no intervalo dos numeros �: %d", soma);
}
