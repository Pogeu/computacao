#include<stdio.h>
#include<locale.h> 

int contador(int qtd)
{
    int i;
    char sexo;
    int qtdf = 0;
    float salario = 0;
    
	for(i = 0 ; i < qtd ;i ++)
	{
		printf("Digite seu sexo: ");
		scanf("%s", &sexo);
		
		printf("Digite o valor do seu salário: ");
		scanf("%f", &salario);
        
        if(sexo == 'F' || sexo == 'f')
		{
		   qtdf = qtdf + 1; 
		}
		
		
		printf("\n");
	}
    return qtdf;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int  qtd, qtdf;

	printf("Digite a quantidade de funcionarios :");
	scanf("%d",&qtd);
	qtdf= contador(qtd);
	printf("A quantidade de funcionárias é %d.", qtdf);
	
	return 0;
}
