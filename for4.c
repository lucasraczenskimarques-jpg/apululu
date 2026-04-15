#include <stdio.h>

int main() {
char pin[20] = "pin";
printf("=====================\n");
    for (int i = 1; i <= 20; i++) {
        if(i %4 != 0){
printf("%i\n", i);
}if(i %4 == 0){
printf("%s\n", pin);

        }
        
    }
printf("=====================\n");


    return 0;
}