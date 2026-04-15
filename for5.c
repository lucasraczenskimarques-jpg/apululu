#include <stdio.h>

int main() {

    int a, fat,i;
    printf("digite um numero para fazer o fatorial: ");
    scanf("%i", &a);

    for(int i = 1; i <= a; i++){
       fat=fat*a;
        
    }
printf("o fatorial de %i é: %i\n",a ,fat); 
    return 0;
}