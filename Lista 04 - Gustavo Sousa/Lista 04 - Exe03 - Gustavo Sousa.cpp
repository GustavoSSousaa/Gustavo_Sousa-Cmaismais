#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    char sexo;
    int vida;

    int totalF = 0, mortasF = 0;
    int totalM = 0, mortasM = 0;
    int ate24 = 0;

    printf("Digite o número de crianças nascidas no período: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nCriança %d:\n", i);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Tempo de vida em meses: ");
        scanf("%d", &vida);

        if (sexo == 'F' || sexo == 'f') {
            totalF++;
            if (vida == 0) { // morreu ao nascer
                mortasF++;
            }
        } else if (sexo == 'M' || sexo == 'm') {
            totalM++;
            if (vida == 0) { // morreu ao nascer
                mortasM++;
            }
        }

        if (vida <= 24) {
            ate24++;
        }
    }

    printf("\n===== RESULTADOS =====\n");
    if (totalF > 0)
        printf("Percentual de meninas mortas: %.2f%%\n", (mortasF * 100.0) / totalF);
    else
        printf("Não houve meninas no período.\n");

    if (totalM > 0)
        printf("Percentual de meninos mortos: %.2f%%\n", (mortasM * 100.0) / totalM);
    else
        printf("Não houve meninos no período.\n");

    printf("Percentual de crianças que viveram até 24 meses: %.2f%%\n", (ate24 * 100.0) / n);

    return 0;
}