#include <stdio.h>
#include <locale.h>

float calcuMedia(int qtd)
{
   
    int i, codigo;
    float soma,valor, media;
 
    for (soma = 0, i= 0; i < qtd; i++)
    {
        printf("\nDigitecódigo do produto: ");
        scanf("%d", &codigo);

        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        
        soma += valor;
    }
    
    media = soma/qtd;
    return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd;
    float media;

    printf("Digite a quantidade de produtos : ");
    scanf("%d", &qtd);
    media = calcuMedia(qtd);
    printf(" \nA média dos produtos é %f .", media);

    return 0;
}
