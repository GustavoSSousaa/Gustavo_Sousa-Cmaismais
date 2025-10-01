#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, codcid, cidmaior, cidmenor;
    int veiculos, acidentes;
    int totalVeiculos = 0, qtdCidadesMenos2000 = 0, somaAcidentesMenos2000 = 0;
    float indice, maiorIndice = -1, menorIndice = 999999;

    for (i = 1; i <= 5; i++) {
        printf("\nCidade %d\n", i);
        printf("Código da cidade: ");
        scanf("%d", &codcid);

        printf("Número de veículos de passeio: ");
        scanf("%d", &veiculos);

        printf("Número de acidentes com vítimas: ");
        scanf("%d", &acidentes);

        
        indice = (float)acidentes / veiculos;

        
        if (indice > maiorIndice) {
            maiorIndice = indice;
            cidmaior = codcid;
        }

        // Verifica menor índice
        if (indice < menorIndice) {
            menorIndice = indice;
            cidmenor = codcid;
        }

        // Soma veículos para calcular média
        totalVeiculos += veiculos;

        // Se tem menos de 2000 veículos, soma acidentes
        if (veiculos < 2000) {
            somaAcidentesMenos2000 += acidentes;
            qtdCidadesMenos2000++;
        }
    }

    printf("\n===== RESULTADOS =====\n");
    printf("Maior índice de acidentes: %.2f (Cidade %d)\n", maiorIndice, cidmaior);
    printf("Menor índice de acidentes: %.2f (Cidade %d)\n", menorIndice, cidmenor);
    printf("Média de veículos nas 5 cidades: %.2f\n", totalVeiculos / 5.0);

    if (qtdCidadesMenos2000 > 0)
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n",
               somaAcidentesMenos2000 / (float)qtdCidadesMenos2000);
    else
        printf("Nenhuma cidade com menos de 2000 veículos.\n");

    return 0;
}