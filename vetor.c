#include <stdio.h>
int main() {

int n, n2, n3;

printf("\n\n");
printf("Digite o tamanho dos vetores A,B e C:\n ");

scanf("%d", &n);
scanf("%d", &n2);
scanf("%d", &n3);
int A[n];
int B[n2];
int C[n3];

printf("Digite os elementos do vetor A:\n");

for(int i = 0; i < n; i++) {

scanf("%d", &A[i]);

    }
    printf("Digite os elementos do vetor B:\n");

for(int j = 0; j < n2; j++) {

scanf("%d", &B[j]);

    }
    printf("Digite os elementos do vetor C:\n");

for(int k = 0; k < n3; k++) {

scanf("%d", &C[k]);

    }
}