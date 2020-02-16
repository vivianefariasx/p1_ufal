// Faça um programa que leia e compare duas strings, em seguida, informe se elas são iguais ou diferentes. 
#include<stdio.h>
#include <string.h> // biblioteca da string
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	char string1[1000],string2[1000];
	
	
	printf("\n Informe a primeira String: ");
	gets(string1); // gets no lugar de scanf pra que possa rodar 
	printf("\n Informe a segunda String: ");
	gets(string2);
	
	if (strcmp (string1,string2)) // strcmp pra comparar as strings
	{
		printf("\n As strings são diferentes");
	}
	
	else 
	{
		printf("\n As strings são iguais");
	}
	
	
}
