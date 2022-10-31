#include <stdio.h>
#include <locale.h>

float somaSal(int qtd)
{
   
    int i, matricula;
    float soma,salario;
 
    for (soma= 0; i= 0; i < qtd; i++)
    {
        printf("\nDigite sua matricula: ");
        scanf("%d", &matricula);

        printf("Digite o valor do seu salário: ");
        scanf("%f", &salario);
        
        soma += salario;
        
    }
   
    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd;
    float soma;

    printf("Digite a quantidade de funcionarios : ");
    scanf("%d", &qtd);
    soma = somaSal(qtd);
    printf(" \nA soma dos salarios é %f .", soma);

    return 0;
}
