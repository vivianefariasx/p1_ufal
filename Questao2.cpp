//2. Fa�a um programa que some infinitos n�meros digitados pelo usu�rio, o programa
//dever� receber um n�mero por vez, quando o usu�rio quiser parar de informar n�meros
//dever� digitar 0, mostre como resultado a soma de todos os n�meros e o total de n�meros
//digitados. 

#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int n1,soma=0,a,dg=0;

   for(;;) // ; ; - loop infinito ou seja quando n�o existe a condi��o ela � verdadeira 
   {
   	printf("\n Informe o numero: ");
   	scanf("%d",& n1);
   	printf("\n Digite 0 para parar de informar os numeros");
   	
   	if (n1==0)
   	{
   		break; // for�ar a parada 
	   }
	   dg++;
	   soma=soma+n1;
   }
   printf ("\n A soma dos numeros �: %d", soma);
   printf("\n O total de numeros digitados �: %d", dg);
   
}
