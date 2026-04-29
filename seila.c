#include <stdio.h>

int main() {

int soma;

for(int i = 1; i <= 20; i++){

if(i %2 == 0){
    printf("%i par\n",i);
}else{
    printf("%i impar\n",i);
}
    if(i %5 == 0){
    soma=soma + i;
}


}

printf("\na soma de todos os numeros divisiveis por 5 é %i\n", soma);





   return 0;
}