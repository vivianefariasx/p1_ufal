//4. Fa�a um programa que receba o valor total de dep�sitos di�rios em um banco durante
//7 dias, retorne como resultado o valor m�nimo, a m�dia, o maior valor e o valor total
//depositado.
#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int a;
	float vtd,vm,m,mv=0,mv1,vt=0;
	
	for(a=0;a<7;a++)
	{
		printf("\n Informe o total de depositos: ");
		scanf("%f", & vtd);
		vt=vt+vtd;
		m=vt/7;
		
		if (vtd>mv)
		{
			mv=vtd;
		}
		else
		{
			if(vtd<mv){
			
			mv1=vtd;}
		}
	}
	printf("\n A media �: %.2f", m);
	printf("\n O maior valor �: %.2f",mv);
    printf("\n O menor valor �: %.2f", mv1);
	printf("\n O valor total �: %.2f", vt);
}
