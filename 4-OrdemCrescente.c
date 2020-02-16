//Faça um programa que leia 3 números inteiros e os retorne em ordem crescente.
#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int n1,n2,n3;
	
	printf("\n Informe o primeiro numero: ");
	scanf("%d", & n1);
	printf("\n Informe o segundo numero: ");
	scanf("%d", & n2);
	printf(" \n Informe o terceiro numero: ");
	scanf("%d", & n3);
	
	if (n1>n2 && n1>n3 && n2>n3)
	{
		printf("\n A ordem crescente dos numeros é: %d %d %d",n3,n2,n1);
	}
	
	else if (n2>n1 && n2>n3 && n1>n3)
	{
		printf("\n A ordem dos numeros é: %d %d %d",n3,n1,n2);
	}
	
	else if (n3>n1 && n3>n2 && n1>n2)
	{
		printf(" \n A ordem dos numeros é: %d %d %d",n2,n1,n3);
	}
	
	else if (n1<n2 && n1<n3 && n2<n3)
	{
		printf("\n A ordem dos numeros é: %d %d %d",n1,n2,n3);
	}
	
	else if (n2<n1 && n2<n3 && n3<n1)
	{
		printf("\n A ordem dos numeros é: %d %d %d",n2,n3,n1);
	}
	
	else 
	{
		printf("\ n A ordem dos numeros é: %d %d %d",n1,n3,n2);
	}
	
	
	
	
}
