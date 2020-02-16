//Faça uma calculadora simples que leia dois números do usuário e em seguida
//pergunte qual operação ele quer realizar (1. Soma, 2. Subtração, 3. Divisão e
//4. Multiplicação), em seguida retorne o resultado da operação.
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1,n2,op;
	
	printf("\n Informe o primeiro numero: ");
	scanf("%d", & n1);
	printf("\n Informe o segundo numero: ");
	scanf("%d", & n2);
	
	printf("\n Qual operação você quer realizar: \n 1.Soma,2.Subtração,3.Divisão ou 4.Multiplicação: ");
	scanf("%d", & op);
	
	if (op==1)
	{
		(op=n1+n2);
		printf("O resultado é: %.2d", op);
	}
	
	else if (op==2)
	{
		(op=n1-n2);
		printf("O resultado é: %.2d",op);
	}
	
	else if (op==3)
	{
		(op=n1/n2);
		printf("O resultado é: %.2d", op);
	}
	
	else if (op==4)
	{
		(op=n1*n2);
		printf("O resultado é: %.2d", op);
	}
	
	else 
	{
		printf("A operação não existe");
	}
	
	
	
	
}
