#include<stdio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float nt1,nt2,media;
	
	printf("Informe a nota da AB1: ");
	scanf("%f", & nt1);
	printf("Informe a nota da AB2: ");
	scanf("%f", & nt2);
	
	media=(nt1+nt2)/2;
	
	if (media>=7)
	{
		printf(" \n Voc� foi aprovado");
	}
	
	else if (media<5)
	{
		printf(" \n Voc� foi reprovado");
	}
	
	else 
	{
		printf(" \n Voc� tem que fazer a prova final");
	}
	
	
	
	
	
	
}
