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
    
    //criar e inicializar a variavel controladora;
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
    
    //criar a variavel controladora;
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
    int =+ 1;   //Pode ser usado para incrementar qualquer valor
    int i ++;   //Incrementa apenas em 1 unidade
    
## switch
Estrutura:
    
    switch( variavel ou expressão) //só trabalha com inteiros ou char
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
Vai executar todos os case posteriores ao case correto

    switch( tipo) 
    {
        case 'O':
            printf(\nLimite para compra de imovel);
        
        case 'P':
            printf(\nLimite para compra de automovel);
        
        case 'B':
            printf(\nLimite de cheque especial);
    }

## string
Estrutura: 

    char string[] = "Text";
  
Exemplo: 

    char string[] = "Lick";
    printf("%s",string);
    printf("%c", string[1]);
    string[0] = 'D';
    printf("%s", string);

Saída:

    Lick
    i
    Dick
    
## Ponteiro
Estrutura: 

    int var = value;
    int * pointer = &var;
    
Exemplo: 

    int myAge = 43; 
    int* ptr = &myAge;
    printf("%d", myAge); 
    printf("%p", &myAge);
    printf("%p", ptr);
    printf("%d\n", *ptr);

Saída:

    43
    0x7ffe5367e044
    0x7ffe5367e044
    43
    
## structures
topico interessante (https://www.javatpoint.com/array-of-structures-in-c)
Estrutura: 
    
    struct MyStructure   
    { 
        int myNum; 
        char myLetter;  
    }; 
    
Exemplo: 

    struct myStructure
    {
        int myNum;
        char myLetter;
    };

    int main() 
    {
        struct myStructure s1;
        s1.myNum = 13;
        s1.myLetter = 'B';
        printf("My number: %d\n", s1.myNum);
        printf("My letter: %c\n", s1.myLetter);

        return 0;
    }

Saída:

    13
    B
    
Exemplo 2: a função strcpy permite escrever strings dentro de uma struc

    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;
    s2 = s1;
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
    
Saída:

    13 B Some text
    30 C Something else
    
   
## Array
Estrutura:
    
    
## File Input and Output 
tópicos interessantes: https://www.w3schools.in/c-programming/file-handling https://www.geeksforgeeks.org/exit0-vs-exit1-in-c-c-with-examples/ https://stackoverflow.com/questions/17383015/difference-between-return-0-and-exit-0
Estrutura:

          FILE *in_file  = fopen("name_of_file", "r"); // read only 
          FILE *out_file = fopen("name_of_file", "w"); // write only 
           
          // test for files not existing. 
          if (in_file == NULL || out_file == NULL) 
            {   
              printf("Error! Could not open file\n"); 
              exit(-1); // must include stdlib.h 
            } 
           
          // write to file vs write to screen 
          fprintf(file, "this is a test %d\n", integer); // write to file 
 
          fprintf(stdout, "this is a test %d\n", integer); // write to the file  
          printf(         "this is a test %d\n", integer); // write to screen  
 
          // read from file/keyboard. remember the ampersands!  
          fscanf(file, "%d %d", &int_var_1, &int_var_2);  
 
          fscanf(stdin, "%d %d", &int_var_1, &int_var_2);  
          scanf(        "%d %d", &int_var_1, &int_var_2); 
          
Exemplo 1:

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
    int num;
    FILE *fptr;

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("C:\\program.txt","w");

    if(fptr == NULL)
    {
      printf("Error!");   
      exit(1);             
    }

    printf("Enter num: ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);

    return 0;
    }
Exemplo 2:

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
    int num;
    FILE *fptr;

    if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
    }

    fscanf(fptr,"%d", &num);

    printf("Value of n=%d", num);
    fclose(fptr); 
  
    return 0;
    }
           
