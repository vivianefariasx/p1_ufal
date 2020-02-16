//Faça um programa que leia um número e retorne o dobro dele, caso ele seja
//negativo, e o triplo caso o número seja positivo, informe também se o número
//digitado é par ou ímpar.
#include<stdio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL,"portuguese");
	int n,n1;
	printf("\n Informe o numero: ");
	scanf ("%d", & n1);
	 
	 if (n1<0)
{
	(n=n1*2);
	printf(" \n O resultado é: %d",n);
}

else 
{
   (n=n1*3);
   printf("\n O resultado é: %d",n);
}

if (n1 % 2 ==0) 
	{
	printf("\n O numero digitado %d é par",n1);
   }
	else
	{
	printf ("\n O numero digitado %d é impar",n1);
	 } 


}
