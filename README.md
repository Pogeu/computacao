# computacao
material de aula

    para utilizar caracteres e simbolos do portugues 
    
    #include<locale.h> 
    
    int main()
    {
        setlocale(LC_ALL, "Portuguese");
        float massa = 132.90545;
        printf("Césio tem massa atômica  %f u, por ser radioativo  é caçado por muitos", massa);
        return 0;
    }
    
