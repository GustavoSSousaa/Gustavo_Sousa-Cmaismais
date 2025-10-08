#include <stdio.h>

int main() {
    int vet[18];
    int mat[3][6];
    int i, j, k = 0;

    for(i = 0; i < 18; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 6; j++) {
            mat[i][j] = vet[k];
            k++;
        }
    }

    printf("\nMatriz gerada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 6; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}