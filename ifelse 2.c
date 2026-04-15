#include <stdio.h>

int a, b, c;

int main()
{
  printf("digite o primeiro numero\n");
  scanf("%i", &a);

    printf("digite o segundo numero\n");
  scanf("%i", &b);

    printf("digite o terceiro numero\n");
  scanf("%i", &c);

    if(a >= b && a >= c){
        printf("o maior numero e \n%i", a);

    }else if(b >= c){
printf("o numero maior e \n%i", b);
    }else{
        printf("o maior numero e \n%i", c);
    }
    return 0;
}
