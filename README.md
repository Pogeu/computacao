# Computação
material de aula que eu vou digitando e as vezes vou guardando por aqui.
Se quiser testar os códigos e estiver sem pc usa esse site aqui:
https://www.programiz.com/c-programming/online-compiler/

## Para utilizar caracteres e simbolos do português 
    
    #include<locale.h> 
    
    int main()
    {
        setlocale(LC_ALL, "Portuguese");
        float massa = 132.90545;
        printf("Césio tem massa atômica  %f u, por ser radioativo  é caçado por muitos", massa);
        return 0;
    }
    
saida:

    Césio tem massa atômica  132,905457 u, por ser radioativo é caçado por muitos
    
## while loop
Estrutura:
    
    criar e inicializar a variavel controladora;
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
    
    criar a variavel controladora;
    for (inicializar variaveis; condição; atualizar variavel)
    {   
        bloco de comando;
                           }
Exemplo:

    int i, max;
    for(i = 0, max = 0; i<5; i++)
    {   
        printf("do shit");
                           }
                           
## incrementar variavel
    int = int + 1; 
    int =+ 1;   #Pode ser usado para incrementar qualquer valor
    int i ++;   #Incrementa apenas em 1 unidade
    
## switch
Estrutura:
    
    switch( variavel ou expressão) #só trabalha com inteiros ou char
    {
        case valor1:
            bloco de comando;
            break;
        
        case valor2:
            bloco de comando;
            break;
        
        default:
            bloco de comando;
    }
Exemplo:
Vai executar todos os case posteriores ao case igual

    switch( tipo) 
    {
        case 'O':
            printf(\nLimite para compra de imovel);
        
        case 'P':
            printf(\nLimite para compra de automovel);
        
        case 'B':
            printf(\nLimite de cheque especial);
    }

##string
Estrutura: 

    char string[] = "Shit";
    printf("%s",string);
Saída:

    Shit
    
