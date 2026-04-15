#include <stdio.h>

int main() {
    int a, maior;

    for (int i = 0; i <= 9; i++) {
        printf("Digite o %i° numero: ", i + 1);
        scanf("%i", &a);


        if (i == 0 || a > maior) {
            maior = a;
        }
    }

    printf("\nO numero maior e: %i\n\n\n\n", maior);

    return 0;
}