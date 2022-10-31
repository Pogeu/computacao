# Computação
material de aula que eu vou digitando e as vezes vou guardando por aqui.

    Para utilizar caracteres e simbolos do português 
    
    #include<locale.h> 
    
    int main()
    {
        setlocale(LC_ALL, "Portuguese");
        float massa = 132.90545;
        printf("Césio tem massa atômica  %f u, por ser radioativo  é caçado por muitos", massa);
        return 0;
    }
    
 ## saida:
    Césio tem massa atômica  132,905457 u, por ser radioativo é caçado por muitos
    
## while loop
Estrutura:
    
    variavel controladora;
    while(condição)
    {   
        bloco de comando;
        atualizar a variavel;
                           }
Exemplo:

    inti i = o;
    while( i<5)
    {
        printf("do shit");
        i++;
                           }
                           
## for loop
Estrutura:
    
    criar e inicializar a variavel controladora;
    for (inicializar variavel, condição, atualizar variavel)
    {   
        bloco de comando;
                           }
Exemplo:

    inti i;
    for(i = 0, i<5, i++)
    {
        printf("do shit");
                           }
                           
