#include <stdio.h>

int a,b = 1;

int main(){
printf("\n\n\n ");
printf("--------------------------------------\n ");

printf("digite um numero para fatorial: ");
scanf("%i",&a);

for(int i = 1; i <= a; i++){
b=b*i;

}
printf("o fatorial de %i é %i \n",a , b);
printf("-------------------------------------- ");
printf("\n\n\n ");




    return 0;
}