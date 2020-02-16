//5. Faça um programa que receba um número N e imprima os 10 primeiros números em
//uma sequência de progressão aritmética. Exemplo com entrada 5: 5, 10, 15, 20, 25... 
#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int n,a,soma=0;
	
	printf("\n Informe o numero: ");
	scanf("%d", & n);
	
	for(a=0;a<10;a++)
	{
		soma=n+soma;
	printf("\n %d", soma);
    }
}
