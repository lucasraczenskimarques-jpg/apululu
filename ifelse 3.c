#include <stdio.h>

int a;

int main()
{

printf("digite um numero\n");
scanf("%i", &a);

if(a == 0){
printf("%i é ZERO\n", a);

}else if(a > 0){
    printf("%i é positivo\n", a);
    
}else{
    printf("%i é negativo\n", a);
}

    return 0;
}