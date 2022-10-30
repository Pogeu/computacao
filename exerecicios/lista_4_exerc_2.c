#include <stdio.h>
#include <locale.h>

int contador(int qtd)
{
    int po = qtd;
    char sexo;
    int i, qtdf = 0;
    float salario;

    while (i < qtd)
    {
        
        printf("\nFuncionario numero %d, Digite seu sexo: ", i +1);
        scanf("%s", &sexo);
        
        if (sexo == 'F' || sexo == 'f')
        {
            qtdf++;
        }

        printf("Digite o valor do seu salário: ");
        scanf("%f", &salario);
        
        i = i +1;
    }
   
    return qtdf;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd, qtdf;

    printf("Digite a quantidade de funcionarios : ");
    scanf("%d", &qtd);
    qtdf = contador(qtd);
    printf(" \nA quantidade de funcionárias é %d .", qtdf);

    return 0;
}
