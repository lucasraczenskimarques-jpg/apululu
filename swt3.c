#include <stdio.h>

int main() {

int dias;

   printf("\n\n\n");
   printf("-------------------------------\n");

   printf("digite um numero de 1 a 7\n");
   scanf("%i", &dias);

switch(dias){
 case 1:
 case 2:
 case 3:
 case 4:
 case 5:
   printf("dia util\n");
 break;
 case 6:
 case 7:
   printf("final de semana\n");
 break;
 default:
 printf("numero ivalido\n");
}
   printf("-------------------------------\n");
   return 0;
}