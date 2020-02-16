// Faça um programa com um menu com 5 opções numeradas entre 1 e 5, solicite ao usuário que
//digite um número referente a opção escolhida e exibida o nome da opção digitada. Caso o usuário
//digite um número inválido, exiba uma mensagem de opção inválida e solicite que digite um número
//novamente até que uma opção válida seja digitada. 
#include<stdio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL,"portuguese");
	int n;
	
	do{
	
	printf(" \n Escolha os acompanhamentos do seu açai: \n 1.Morango,Kiwi e Amendoim \n 2.Leite Ninho,Morango e Leite Condensado \n 3.Banana,Leite Condensado e Granola \n 4.Calda de Morango,Amendoim e Banana \n 5.Leite Condensado,Morango e Kiwi: \n");
    scanf("%d",& n);
    
    if(n==1)
    {
    	printf("\n A opção escolhida foi: 1.Morango,Kiwi e Amendoim");
	}
	else if (n==2)
	{
		printf("\n A opção escolhida foi: 2.Leite Ninho,Morango e Leite Condensado");
	}
    else if (n==3)
    {
    	printf("\n A opção escolhida foi: 3.Banana,Leite Condensado e Granola");
	}
	else if (n==4)
	{
		printf("\n A opção escolhida foi: 4.Calda de Morango, Amendoim e Banana");
	}
    else if (n==5)
    {
    	printf("\n A opçao escolhida foi: 5. Leite Condensado,Morango e Kiwi");
	}
	else
	{
		printf("Opção invalida, tente novamente");
	}
	
	}while(n>=6);
	
}   


