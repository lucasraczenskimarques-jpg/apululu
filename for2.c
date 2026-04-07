#include <stdio.h>

int a, b;

int main(){

printf("digite um numero para calcular: ");
scanf("%i",&a);

for(int i = 1; i <= a; i++){
    if(i % 3 == 0){
b=b+i;
  
    }
}
    printf("%i\n",b);   







    return 0;
}
