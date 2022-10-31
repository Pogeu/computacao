#include <stdio.h>
#include <locale.h>

int leValida()
{   
    int i;
    do
    {
      printf("\nDigite a quantidadr: ");
      scanf("%d", &i);
    }while (i <= 0);  
       
    return i;
}
  
float funcionarios(int qtd)
{
    int i, matricula;
    float soma, sal;
    for ( i =0, soma = 0; i < qtd; i++)
    {
        printf("\nDigite a matricula : ");
        scanf("%d", &matricula);

        printf("Digite o valor do salario: ");
        scanf("%f", &sal);
      
        soma += sal;
    }
   
  return soma;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd;
    float soma;
    
    qtd = leValida();
    soma = funcionarios(qtd)
  
    printf("\nA soma dos salarios é de R$ %.2f: ", soma);
  
    return 0;
}

