//Fa�a um programa que leia a idade de um usu�rio e verifique se ele � obrigado
//a votar nas elei��es brasileiras.
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
	printf("Voc� � obrigado a votar nas elei��es");
    }

    else
    {
    printf ("Voc� n�o � obrigado a votar");
    }
	
	
}
