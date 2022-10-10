#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 


float calcumedia(float nota1, float nota2)
{
	float media = (nota1+nota2)/2;
	return media;
}

void situacao(float media)
{
	if(media >= 7)
	{
		printf("sua média é igual a %.2f e você esta aprovado.",media);
	}
	else if( 3 <= media<7)
	{
		printf("sua média é igual a %.2f e você esta em final.",media);	
	}
	else if ( 3 > media)
	{
		printf("sua média é igual a %.2f e você esta reprovado.",media);	
	}
	
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int matricula;
	float media, nota1, nota2;
	
	printf("Digite a sua matricula:");
	scanf("%d",&matricula);
	
	printf("Digite o valor da sua primeira nota:");
	scanf("%f",&nota1);
	
	printf("Digite o valor da sua segunda nota:");
	scanf("%f",&nota2);
	
	media = calcumedia(nota1,nota2);
	printf("Sua matricula é %dGELT,", matricula);
	
	situacao(media);
	return 0;	
}
