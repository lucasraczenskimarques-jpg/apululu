#include <stdio.h>

int main() {
char a;
int b, c;
   printf("\n\n\n");
   printf("-------------------------------\n");

   printf("digite a operação para calcular\n");
   scanf("%c", &a);

   printf("digite dois numeros para fazer o calculo\n");
   scanf("%i %i", &b, &c);

switch(a){

        case '+':
    printf("o reultado da conta é: %i\n", b + c);
    break;
        case '-':
    printf("o reultado da conta é: %i\n", b - c);
    break;
        case '*':
    printf("o reultado da conta é: %i\n", b * c);
    break;
        case '/':
        if(c != 0){
    printf("o reultado da conta é: %i\n", b / c);
    break;
        }else{
    printf("por favor digite um numero que nao seja '0'\n");
        }
}
   printf("-------------------------------\n");



    return 0;
}