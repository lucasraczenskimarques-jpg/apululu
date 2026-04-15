#include <stdio.h>

float a, b, c, med, som;

int main()
{
printf("digite sua primeira nota:");
scanf("%f", &a);

printf("digite sua segunda nota:");
scanf("%f", &b);

printf("digite sua terceira nota:");
scanf("%f", &c);

som= a+b+c;
med= som/3;
    if(med >= 7){
    printf("você foi aprovado: %2.2f", med);
}else{
    printf("você foi reprovado%2.2f",med);
}
    return 0;
}