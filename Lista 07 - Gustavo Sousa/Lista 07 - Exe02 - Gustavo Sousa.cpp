#include <stdio.h>

int main() {
    float temp[12];
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int i, mesMaior = 0, mesMenor = 0;

    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura média de %s: ", meses[i]);
        scanf("%f", &temp[i]);
    }

    for (i = 1; i < 12; i++) {
        if (temp[i] > temp[mesMaior]) {
            mesMaior = i;
        }
        if (temp[i] < temp[mesMenor]) {
            mesMenor = i;
        }
    }

    printf("\n Maior temperatura: %.2f°C em %s\n", temp[mesMaior], meses[mesMaior]);
    printf(" Menor temperatura: %.2f°C em %s\n", temp[mesMenor], meses[mesMenor]);

    return 0;
}

Atv002