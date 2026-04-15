#include <stdio.h>
float cel, firen;
int main()
{
    printf("pra caucular de c° pra f°\n");
    printf("digite a temperatura em celsius\n");

    scanf("%f", &cel);

firen= cel * 1.8 + 32;

printf("a temperatura em f° é: %2.2f", firen);

    return 0;
}