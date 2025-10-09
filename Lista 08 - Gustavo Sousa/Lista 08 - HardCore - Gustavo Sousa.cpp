#include <stdio.h>
#include <conio.h>

int main() {
    int matriz[5][3];
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("Armazem %d\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Estoque do produto %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        printf("Custo do produto %d: ", j + 1);
        scanf("%d", &matriz[4][j]);
    }

    int totalArmazem[4] = {0};
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            totalArmazem[i] += matriz[i][j];
        }
        printf("O armazem %d tem %d itens no total.\n", i + 1, totalArmazem[i]);
    }

    int maiorEstoque = matriz[0][1];
    int armazemMaior = 0;
    for (i = 1; i < 4; i++) {
        if (matriz[i][1] > maiorEstoque) {
            maiorEstoque = matriz[i][1];
            armazemMaior = i;
        }
    }
    printf("O armazem %d tem o maior estoque do produto 2, com %d unidades.\n", armazemMaior + 1, maiorEstoque);

    int menorTotal = totalArmazem[0];
    int armazemMenor = 0;
    for (i = 1; i < 4; i++) {
        if (totalArmazem[i] < menorTotal) {
            menorTotal = totalArmazem[i];
            armazemMenor = i;
        }
    }
    printf("O armazem %d tem o menor estoque total, com %d itens.\n", armazemMenor + 1, menorTotal);

    for (j = 0; j < 3; j++) {
        int totalProduto = 0;
        for (i = 0; i < 4; i++) {
            totalProduto += matriz[i][j];
        }
        int custoTotal = totalProduto * matriz[4][j];
        printf("O custo total do produto %d e %d.\n", j + 1, custoTotal);
    }

    for (i = 0; i < 4; i++) {
        int custoArmazem = 0;
        for (j = 0; j < 3; j++) {
            custoArmazem += matriz[i][j] * matriz[4][j];
        }
        printf("O custo total do armazem %d e %d.\n", i + 1, custoArmazem);
    }

    getch();
    return 0;
}