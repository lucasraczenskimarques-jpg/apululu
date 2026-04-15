#include <stdio.h>

float a, b, res;

int main()
{

printf("digite o primeiro numero\n");
scanf("%f", &a);
printf("digite o segundo numero\n");
scanf("%f", &b);

res= a + b;

printf("O primeiro numero é %2.2f\n O segundo numero é %2.2f\n E a soma é %2.2f\n", a, b, res);

    return 0;
}
