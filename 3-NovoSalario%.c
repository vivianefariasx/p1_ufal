//Fa�a um programa que calcule o aumento salarial de funcion�rios de uma empresa, o usu�rio
//dever� digitar o valor do sal�rio atual e o programa dever� retornar o valor do novo sal�rio.
//Funcion�rios que ganham at� 1000 recebem 15% de aumento, os que ganham at� 2000 recebem
//10% e os que ganham 3000 ou mais 5%.


#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	float salario,novos;
	
	printf("\n Informe o sal�rio: ");
	scanf("%f",& salario);
	
	if (salario<=1000)
	{
		novos=(salario*0.15+salario);
		printf("\n Seu novo salario �:%.2f", novos);
	}
	
	else if (salario>=1001 && salario<=2000)
	{
		novos=(salario*0.10+salario);
		printf("\n Seu novo salario �: %.2f", novos);
	}
	
	else 
	{
		novos=(salario*0.5+salario);
		printf("\n Seu novo salario �: %.2f", novos);
	}
	
	
	
	
}
