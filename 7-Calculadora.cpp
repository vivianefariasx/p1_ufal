//Fa�a uma calculadora simples que leia dois n�meros do usu�rio e em seguida
//pergunte qual opera��o ele quer realizar (1. Soma, 2. Subtra��o, 3. Divis�o e
//4. Multiplica��o), em seguida retorne o resultado da opera��o.
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
	
	printf("\n Qual opera��o voc� quer realizar: \n 1.Soma,2.Subtra��o,3.Divis�o ou 4.Multiplica��o: ");
	scanf("%d", & op);
	
	if (op==1)
	{
		(op=n1+n2);
		printf("O resultado �: %.2d", op);
	}
	
	else if (op==2)
	{
		(op=n1-n2);
		printf("O resultado �: %.2d",op);
	}
	
	else if (op==3)
	{
		(op=n1/n2);
		printf("O resultado �: %.2d", op);
	}
	
	else if (op==4)
	{
		(op=n1*n2);
		printf("O resultado �: %.2d", op);
	}
	
	else 
	{
		printf("A opera��o n�o existe");
	}
	
	
	
	
}
