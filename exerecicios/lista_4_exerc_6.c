
#include <stdio.h>
#include <locale.h>

float downloadUm(int qtd)
{
    int i, j;
    float tamanho,valor;
 
    for (soma = 0, i= 0, j= 0; i < qtd; i++)
    {
        printf("\nDigite tamanho do download: ");
        scanf("%d", &tamanho);
        soma += tamanho;
        
        if (tamanho >= 2)
        {
          j ++;
        }  
    }
    printf("Existem %d downloads de até 2Mbytes", j);
    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtddown, qtduser = 0;
    float soma, preco, valor, media;
    float somapago = 0;
  
    printf("Digite o preço de cada download: ");
    scanf("%f", &preco);
    printf("Digite a quantidade de downloads que você deseja : ");
    scanf("%d", &qtddown);
    
    while (qtddown != 0)
    {
      soma = downloadUm(qtddown);
      valor = soma * preco;
      printf(" \nO valor pago pelo tamamnho dos downloads é de R$ %f .", valor);
      
      somapago += valor
      qtduser ++;
      
      printf("Digite a quantidade de downloads que você deseja : ");
      scanf("%d", &qtd);
    }
    
    media = somapago/qtduser;
    printf("O valor médio pago pelos usuarios foi de  R$ %f ." ,media);
    
    return 0;
}
