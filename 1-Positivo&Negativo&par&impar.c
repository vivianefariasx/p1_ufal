//Fa�a um programa que leia um n�mero e retorne o dobro dele, caso ele seja
//negativo, e o triplo caso o n�mero seja positivo, informe tamb�m se o n�mero
//digitado � par ou �mpar.
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
	printf(" \n O resultado �: %d",n);
}

else 
{
   (n=n1*3);
   printf("\n O resultado �: %d",n);
}

if (n1 % 2 ==0) 
	{
	printf("\n O numero digitado %d � par",n1);
   }
	else
	{
	printf ("\n O numero digitado %d � impar",n1);
	 } 


}
