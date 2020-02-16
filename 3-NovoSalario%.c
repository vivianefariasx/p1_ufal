//Faça um programa que calcule o aumento salarial de funcionários de uma empresa, o usuário
//deverá digitar o valor do salário atual e o programa deverá retornar o valor do novo salário.
//Funcionários que ganham até 1000 recebem 15% de aumento, os que ganham até 2000 recebem
//10% e os que ganham 3000 ou mais 5%.


#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	float salario,novos;
	
	printf("\n Informe o salário: ");
	scanf("%f",& salario);
	
	if (salario<=1000)
	{
		novos=(salario*0.15+salario);
		printf("\n Seu novo salario é:%.2f", novos);
	}
	
	else if (salario>=1001 && salario<=2000)
	{
		novos=(salario*0.10+salario);
		printf("\n Seu novo salario é: %.2f", novos);
	}
	
	else 
	{
		novos=(salario*0.5+salario);
		printf("\n Seu novo salario é: %.2f", novos);
	}
	
	
	
	
}
