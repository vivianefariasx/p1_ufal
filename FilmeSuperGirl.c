/*Fa�a um programa em que solicite ao usuario uma senha para a libera��o de ingressos exclusivos e limitados do filme "Super Girl", 
de acordo com a tabela informe o desconto do mesmo e caso uma das senhas seja a sg informe o ganho do desconto + um cupom,
caso a senha esteja incorreta informe ao usuario que a sess�o � exclusiva;*/

#include<stdio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL,"portuguese");
	int senha,desconto;
	printf("Informe a senha: ");
	scanf("%d",& senha);
	
	if(senha==110619)
	{ 
	   desconto=(50-10);
	   printf("\n Gra�as a sua senha o ingresso que era de 50 reias ficou por apenas: %d, Bom filme e aproveite!!",desconto);
	}
	
	else if (senha==191106)
	{
		desconto=(50-15);
	    printf("\n Gra�as a sua senha o ingresso que era de 50 reais ficou por apenas: %d, Bom filme e aproveite!!",desconto);			
	}
	
	else if (senha==61911)
	{
		desconto=(50-25);
		printf("\n Gra�as a sua senha o ingresso que era de 50 reais ficou por apenas: %d, Bom filme e aproveite!!",desconto);
	}
	
	else if (senha==11062019)
	{
		desconto=(50-50);
		printf("\n SURPRESA VOC� GANHOU O SEU INGRESSO TOTALMENTE GRATIS + 1 CUPOM B�NUS DE PIPOCA, BOM FILME E DIVIRTA-SE!!");
	}
	
	else
	{
		printf("\n Senha incorreta, a sess�o � exclusiva!!");
	}
	
 } 
