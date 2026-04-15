#include <stdio.h>

int num;

int main()
{
   printf("digite um numero\n", &num);
   scanf("%i", &num);

   if(num % 2 == 0) {
        printf("%i é um numero par\n", num);

   }
   else {
        printf("%i é um numero impar\n", num);
   }
   
    return 0;
}