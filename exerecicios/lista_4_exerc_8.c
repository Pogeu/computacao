#include <stdio.h>
#include <locale.h>

float leValida()
{   
  float sal;
    
  do
  {
    printf("\nDigite o salario: ");
    scanf("%f", &sal);
  } while (sal <= 1212.0);  
       
  return sal;
}
  
float umDepartamento(int qtd)
{
    int i, matricula, igual;
    float maior, sal;
    for ( i =0, maior = 0; i < qtd; i++)
    {
        printf("\nDigite a matricula : ");
        scanf("%d", &matricula);

        sal = leValida();
        if(sal > maior)
        {
          maior = salario;
          igual = 1;
        }
        else
        {
          if(salario == maior)
          {
            igual++;
          } 
        }
        soma += sal;
    }
  printf("\nMaior salario é de R$ %.2f com %d  funcionarios.", maior,igual);
  return soma;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtd, cod;
    float soma, somager = 0;
    
    printf("\nDigite o codigo ");
    scanf("%d",&cod);
    while(cod ! =0)
    {
      printf("Digite a quantidade de funcionarios:");
      scanf("%d",&qtd);
      soma = umDepartamento(qtd);
      printf("\nsoma dos salariosé de R$ %.2f", soma); 
      somager += soma;
      printf("\nDigite o codigo ");
      scanf("%d",&cod); 
    }  
    
    printf("\nA soma geral dos salarios é de R$ %.2f: ", somager);
    return 0;
}

