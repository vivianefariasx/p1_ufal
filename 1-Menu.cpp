// Fa�a um programa com um menu com 5 op��es numeradas entre 1 e 5, solicite ao usu�rio que
//digite um n�mero referente a op��o escolhida e exibida o nome da op��o digitada. Caso o usu�rio
//digite um n�mero inv�lido, exiba uma mensagem de op��o inv�lida e solicite que digite um n�mero
//novamente at� que uma op��o v�lida seja digitada. 
#include<stdio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL,"portuguese");
	int n;
	
	do{
	
	printf(" \n Escolha os acompanhamentos do seu a�ai: \n 1.Morango,Kiwi e Amendoim \n 2.Leite Ninho,Morango e Leite Condensado \n 3.Banana,Leite Condensado e Granola \n 4.Calda de Morango,Amendoim e Banana \n 5.Leite Condensado,Morango e Kiwi: \n");
    scanf("%d",& n);
    
    if(n==1)
    {
    	printf("\n A op��o escolhida foi: 1.Morango,Kiwi e Amendoim");
	}
	else if (n==2)
	{
		printf("\n A op��o escolhida foi: 2.Leite Ninho,Morango e Leite Condensado");
	}
    else if (n==3)
    {
    	printf("\n A op��o escolhida foi: 3.Banana,Leite Condensado e Granola");
	}
	else if (n==4)
	{
		printf("\n A op��o escolhida foi: 4.Calda de Morango, Amendoim e Banana");
	}
    else if (n==5)
    {
    	printf("\n A op�ao escolhida foi: 5. Leite Condensado,Morango e Kiwi");
	}
	else
	{
		printf("Op��o invalida, tente novamente");
	}
	
	}while(n>=6);
	
}   


