#include <stdio.h>

int main() {
    int vet[8];
    int i = 0, j, num, pos;

    while (i < 8) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        pos = i;
        for (j = 0; j < i; j++) {
            if (num < vet[j]) {
                pos = j;
                break;
            }
        }

        for (j = i; j > pos; j--) {
            vet[j] = vet[j - 1];
        }

        vet[pos] = num;
        i++;
    }

    printf("\nVetor em ordem crescente:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
    return 0;
}
