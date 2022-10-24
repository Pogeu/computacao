#include<stdio.h>
#include<locale.h> 


float calcumedia(float nota1, float nota2)
{
	float media = (nota1+nota2)/2;
	return media;
}

void situacao(float media)
{
	if(media >= 5)
	{
		printf("sua média é igual a %.2f e você esta aprovado. \n",media);
	}
	
	else if ( 5 > media)
	{
		printf("sua média é igual a %.2f e você esta reprovado. \n",media);	
	}
	
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, matricula, qtd;
	float media, nota1, nota2;
	
	printf("Digite a quantidade de alunos :");
	scanf("%d",&qtd);
	
	for(i = 0 ; i < qtd ;i ++)
	{
		printf("Digite a sua matricula:");
		scanf("%d",&matricula);
		
		printf("Digite o valor da sua primeira nota:");
		scanf("%f",&nota1);
	
		printf("Digite o valor da sua segunda nota:");
		scanf("%f",&nota2);
	
		media = calcumedia(nota1,nota2);
		printf("Aluno número %d, Sua matricula é %dGELT , ", i+1, matricula);
	
		situacao(media);
		
		printf("\n");
	}
	printf("As médias de todos os alunos foram calculadas.");
	
	return 0;
}
