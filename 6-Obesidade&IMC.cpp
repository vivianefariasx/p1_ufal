//Faça um programa que leia o peso do usuário e informe se ele está com peso
//normal, acima do peso ou abaixo do peso e informe também o seu IMC.
#include<stdio.h>
#include<locale.h>
#include<math.h>
 int main ()
{
 setlocale(LC_ALL,"portuguese");
	float p,al,imc;
	
	printf("\n Informe o peso:");
	scanf("%f",& p);
	printf("\n Informe sua altura:");
	scanf("%f",& al);
	
   imc=(p/(al*al));
	if(imc<18.5)
	{
		printf("\n Você está abaixo do peso, seu IMC é: %.2f",imc);
	}
	else if(imc>=18.6 && imc<=24.9)
	{
		printf("\n Você esta no peso ideal, seu IMC é: %.2f", imc);
	 } 
	 else if(imc>=25 && imc<=29.9)
	 {
	 	printf("\n Você esta levemente acima do peso, seu IMC é: %.2f", imc);
	 }
	 else if(imc>=30 && imc<=34.9)
	 {
	 	printf("\n Você esta no grau 1 da obesidade, seu IMC é: %.2f",imc);
	 }
	else if (imc>=35 && imc<=39.9)
	{
		printf("\n Você esta no grau 2 da obesidade(Severa), seu IMC é: %.2f",imc);
	}
	else 
	{
		printf("\n Você esta na obesidade mórbida, seu IMC é: %.2f",imc);
	}
}
