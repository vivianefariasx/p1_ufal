// Fa�a um programa que receba um n�mero referente ao dia e um n�mero referente ao m�s, em
//seguida, retorne em qual esta��o do ano estamos.
//No Brasil, as datas das Esta��es do Ano em 2019 s�o:
//Outono: 20 de mar�o, Inverno: 21 de junho, Primavera: 23 de setembro, Ver�o: 22 de dezembro 
#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	int dia,mes,estacao;
	
	printf("\n Informe o dia: ");
	scanf("%d",& dia);
	printf("\n Informe o m�s: ");
	scanf("%d",& mes);
	
	if(dia<=31 && mes<=2)
	{
		printf("\n A esta��o do ano � Ver�o");
		
	}
	else if (dia<=19 && mes==3)
	{
		printf("\n A esta��o do ano � Ver�o");
	}
		
	else if (dia>=20 && mes==3)
		{
			printf("\n A esta��o do ano � Outono");
		}
	
	else if (dia<=31 && mes==4 || mes==5)
	  {
		printf("\n A esta��o do ano � Outono");
	  }  
	  else if (dia<=20 && mes==6)
	  {
	  	printf ("\n A esta��o do ano � Outono");
	  }
		
	else if (dia>=21 && mes==6)
		{
			printf ("\n A esta��o do ano � Inverno");
		}
	 else if (dia<=31 && mes==7 || mes==8)
	 {
	 	printf("\n A esta��o do ano � Inverno");
	 }
	 else if (dia<=22 && mes==9)
	 {
	 	printf("\n A esta��o do ano � Inverno");
	 }
	 else if (dia>=23 && mes==9)
	 {
	 	printf("\n A esta��o  do ano � Primavera");
	 }
	 else if (dia<=31 && mes==10 || mes==11)
	 {
	 	printf("\n A esta��o do ano � Primavera");
	 }
	 else if (dia<=21 && mes==12)
	 {
	 	printf("\n A esta��o do ano � Primavera");
	 }
	 
	 else 
	 {
	 	printf("\n A esta��o do ano � Ver�o");
	 }
	 
	 
	 
}
