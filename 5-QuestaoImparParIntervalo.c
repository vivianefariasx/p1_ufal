//Fa�a um programa que receba um n�mero inicial e um n�mero final, em seguida, imprima todos
//os n�meros pares e depois todos os n�meros �mpares dentro do intervalo informado pelo usu�rio. 

#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	int n1,n2,soma,i;
	
	printf("\n Informe o numero de entrada: ");
	scanf("%d",& n1);
	printf("\n Informe o numero de saida: ");
	scanf("%d",& n2);
	
	 for(soma=n1;soma<=n2;soma=soma+2)
	 {
	 	printf("\n O intervalo dos numeros pares �: %d", soma);
	 }
	 
	 for(soma=n1+1;soma<=n2;soma=soma+2)
	 {
	 	printf("\n O intervalo dos numeros impares �: %d", soma);
	 }
		
}
