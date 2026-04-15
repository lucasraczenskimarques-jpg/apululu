#include <stdio.h>

float a, b, c;

int main()
{
printf("digite o primeiro numero:");
scanf("%f", &a);

printf("digite o segundo numero:");
scanf("%f", &b);

printf("digite o terceiro numero:");
scanf("%f", &c);


if(a <= b && b <= c && a <= c){
    printf("%2.2f, %2.2f, %2.2f", a, b, c);
   

}else if(a <= b && b >=c && a >= c){
    printf("%2.2f, %2.2f, %2.2f", c, a, b);
   

}else if(a >= b && b <= c && a <= c){
    printf("%2.2f, %2.2f, %2.2f", b, a, c );
   

}else if(a >= b && b <= c && a >= c){
    printf("%2.2f, %2.2f, %2.2f", b, c, a );


}else{
    printf("%2.2f, %2.2f, %2.2f", c, b, a);
}
    return 0;
}