//3. Fa�a um programa que imprima os N primeiros n�meros da sequ�ncia Fibonacci, por
//exemplo, digitando o n�mero 10 o programa dever� retornar como resultado: 0 1 1 2 3 5
//8 13 21 34. 
#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int n,i, a,b,auxiliar;
	a=0;
	b=1;
	printf("\n Informe um numero: ");
	scanf("%d", & n);
	printf("\n %d",a);
	printf("\n %d",b);
	
	for(i=0;i<8;i++)
	{
		auxiliar=a+b;
		a=b;
		b=auxiliar;
		printf("\n %d", auxiliar);
	}
	
}
