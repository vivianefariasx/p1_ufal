//7. Faça um programa que receba um número positivo e mostre como resultado o número
//digitado, caso o usuário digite um número negativo mostre uma mensagem informando
//que o número é inválido e solicite ao usuário que digite um número novamente até que
//um número positivo seja informado.
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
		printf("\n O numero digitado é: %d", n);
	}
	else {
		printf("\n O numero é invalido: ");
		do{
			printf("\n Informe um numero positivo: ");
			scanf("%d", & n);	
		}while(n<0);
		printf("\n O numero é: %d", n);
	}
}
