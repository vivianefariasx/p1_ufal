//Faça um programa que leia 3 números inteiros e mostre ao usuário o maior deles.
#include<stdio.h>
#include<locale.h>

int main ()

{
	int n1,n2,n3;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Informe o primeiro numero: ");
	scanf("%d", & n1);
	printf("Informe o segundo numero: ");
	scanf("%d", & n2);
	printf("Informe o terceiro numero: ");
	scanf("%d", & n3);
	
	if (n1>n2 && n1>n3)
	{
		printf("%d é o maior numero",n1);
	}
	
	else if (n2>n1 && n2>n3)
	{
		printf("%d é o maior numero", n2);
	}
	
	else if (n3>n1 && n3>n2)
	{
		printf("%d é o maior numero", n3);
	}
	
	else 
	{
		printf("Os numeros são iguais");
	}
	
}
