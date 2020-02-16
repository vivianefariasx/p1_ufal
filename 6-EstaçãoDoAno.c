// Faça um programa que receba um número referente ao dia e um número referente ao mês, em
//seguida, retorne em qual estação do ano estamos.
//No Brasil, as datas das Estações do Ano em 2019 são:
//Outono: 20 de março, Inverno: 21 de junho, Primavera: 23 de setembro, Verão: 22 de dezembro 
#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	int dia,mes,estacao;
	
	printf("\n Informe o dia: ");
	scanf("%d",& dia);
	printf("\n Informe o mês: ");
	scanf("%d",& mes);
	
	if(dia<=31 && mes<=2)
	{
		printf("\n A estação do ano é Verão");
		
	}
	else if (dia<=19 && mes==3)
	{
		printf("\n A estação do ano é Verão");
	}
		
	else if (dia>=20 && mes==3)
		{
			printf("\n A estação do ano é Outono");
		}
	
	else if (dia<=31 && mes==4 || mes==5)
	  {
		printf("\n A estação do ano é Outono");
	  }  
	  else if (dia<=20 && mes==6)
	  {
	  	printf ("\n A estação do ano é Outono");
	  }
		
	else if (dia>=21 && mes==6)
		{
			printf ("\n A estação do ano é Inverno");
		}
	 else if (dia<=31 && mes==7 || mes==8)
	 {
	 	printf("\n A estação do ano é Inverno");
	 }
	 else if (dia<=22 && mes==9)
	 {
	 	printf("\n A estação do ano é Inverno");
	 }
	 else if (dia>=23 && mes==9)
	 {
	 	printf("\n A estação  do ano é Primavera");
	 }
	 else if (dia<=31 && mes==10 || mes==11)
	 {
	 	printf("\n A estação do ano é Primavera");
	 }
	 else if (dia<=21 && mes==12)
	 {
	 	printf("\n A estação do ano é Primavera");
	 }
	 
	 else 
	 {
	 	printf("\n A estação do ano é Verão");
	 }
	 
	 
	 
}
