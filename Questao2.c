//2. Faça um programa que some infinitos números digitados pelo usuário, o programa
//deverá receber um número por vez, quando o usuário quiser parar de informar números
//deverá digitar 0, mostre como resultado a soma de todos os números e o total de números
//digitados. 

#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int n1,soma=0,a,dg=0;

   for(;;) // ; ; - loop infinito ou seja quando não existe a condição ela é verdadeira 
   {
   	printf("\n Informe o numero: ");
   	scanf("%d",& n1);
   	printf("\n Digite 0 para parar de informar os numeros");
   	
   	if (n1==0)
   	{
   		break; // forçar a parada 
	   }
	   dg++;
	   soma=soma+n1;
   }
   printf ("\n A soma dos numeros é: %d", soma);
   printf("\n O total de numeros digitados é: %d", dg);
   
}
