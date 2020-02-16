//Faça um programa que leia a idade de um usuário e verifique se ele é obrigado
//a votar nas eleições brasileiras.
#include<stdio.h>
#include<locale.h>

int main ()

{
	int i;
	
	setlocale (LC_ALL,"portuguese");
	
	printf("Informe a idade: ");
	scanf("%d", & i);
	
	if (i>=18)
	{
	printf("Você é obrigado a votar nas eleições");
    }

    else
    {
    printf ("Você não é obrigado a votar");
    }
	
	
}
