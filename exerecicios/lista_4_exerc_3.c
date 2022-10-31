
#include <stdio.h>
#include <locale.h>

float descobreMaior(int qtd)
{
   
    int i, matricula;
    float maior,salario;
 
    for (maior= 0, i= 0, i < qtd, i++)
    {
        printf("\nDigite sua matricula: ");
        scanf("%d", &matricula);

        printf("Digite o valor do seu salário: ");
        scanf("%f", &salario);
        
        if (salario > maior)
        {
           maior = salario;
        }
    }
   
    return maior;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd;
    float maior;

    printf("Digite a quantidade de funcionarios : ");
    scanf("%d", &qtd);
    maior = descobreMaior(qtd);
    printf(" \nO maior salario é %f .", maior);

    return 0;
}
