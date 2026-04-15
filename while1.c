#include <stdio.h>

int i;

int main(){
printf("--------------------------------------");

printf("\n\ndigite sua nota: ");
scanf("%i", &i);

while(i < 0 || i > 10){

    printf("nota invalida, digite novamente\n");
    scanf("%i", &i);

}
printf("sua nota e: %i\n\n\n", i);
printf("--------------------------------------");





    return 0;
}