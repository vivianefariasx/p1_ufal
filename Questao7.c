//7. Fa�a um programa que receba um n�mero positivo e mostre como resultado o n�mero
//digitado, caso o usu�rio digite um n�mero negativo mostre uma mensagem informando
//que o n�mero � inv�lido e solicite ao usu�rio que digite um n�mero novamente at� que
//um n�mero positivo seja informado.
#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int n;
	printf("\n Informe um numero: ");
	scanf("%d", & n);
	if (n>0)
	{
		printf("\n O numero digitado �: %d", n);
	}
	else {
		printf("\n O numero � invalido: ");
		do{
			printf("\n Informe um numero positivo: ");
			scanf("%d", & n);	
		}while(n<0);
		printf("\n O numero �: %d", n);
	}
}
