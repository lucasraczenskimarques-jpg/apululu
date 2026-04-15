#include <stdio.h>

int main()
{
    printf("oi me chamo Lucas, para proseguir digite suas informações: \n");


    char nome[20];
    char endereco[20];
    int telefone;
        printf("qual e o seu nome?\n");
    scanf("%s", nome);
        printf("qual e o seu endereco?\n");
    scanf("%s", endereco);
        printf("qual e o seu telefone?\n");
    scanf("%d\n", &telefone);
        printf("muito prazer: %s\n",nome);
        printf("seu endereco e: %s\n",endereco);
        printf("seu telefone e: %i\n",&telefone);


    return 0;
}