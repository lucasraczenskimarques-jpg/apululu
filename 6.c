#include <stdio.h>

int main() {

float a,b,c,media;

   printf("\n\n\n");
   printf("-------------------------------\n");


   printf("\033[4m-=Obtenha a media de suas notas=-\033[0m\n\n");

    printf("digite a primeira nota: ");
   scanf("%f", &a);
    printf("digite a segunda nota: ");
   scanf("%f", &b);
    printf("digite a terceira nota: ");
   scanf("%f", &c);

media=(a+b+c)/3;

   printf("\n\033[1;31;4msua media é %.2f\033[0m\n\n", media);

   printf("-------------------------------\n");
   return 0;
}