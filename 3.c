#include <stdio.h>

int a, b, soma, sub, mult, div;

int main()
{
    printf("para calcular, digite o primeiro numero \n");
    scanf("%i", &a);
    printf("para calcular, digite o segundo numero \n");
    scanf("%i", &b);
soma=a+b;
sub=a-b;
mult=a*b;
div=a/b;
printf("a soma é: %i\na subtracão é?: %i\na multiplicação é: %i\na divisão é: %i\n",soma, sub, mult, div);
    return 0;
}