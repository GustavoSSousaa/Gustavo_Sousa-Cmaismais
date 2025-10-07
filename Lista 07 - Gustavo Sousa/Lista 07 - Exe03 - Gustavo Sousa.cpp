#include <stdio.h>

int main() {
    int codigos[10];
    float saldos[10];
    int i, opcao, codigo, encontrado;
    float valor, soma;

    for (i = 0; i < 10; i++) {
        printf("Digite o codigo da conta %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Digite o saldo da conta %d: ", i + 1);
        scanf("%f", &saldos[i]);
    }

    do {
        printf("\n1 - Efetuar deposito\n");
        printf("2 - Efetuar saque\n");
        printf("3 - Consultar ativo bancario\n");
        printf("4 - Finalizar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o codigo da conta: ");
            scanf("%d", &codigo);
            encontrado = 0;
            for (i = 0; i < 10; i++) {
                if (codigos[i] == codigo) {
                    printf("Digite o valor do deposito: ");
                    scanf("%f", &valor);
                    saldos[i] += valor;
                    printf("Deposito realizado. Novo saldo: %.2f\n", saldos[i]);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) printf("Conta nao encontrada.\n");
        } 
        else if (opcao == 2) {
            printf("Digite o codigo da conta: ");
            scanf("%d", &codigo);
            encontrado = 0;
            for (i = 0; i < 10; i++) {
                if (codigos[i] == codigo) {
                    printf("Digite o valor do saque: ");
                    scanf("%f", &valor);
                    if (saldos[i] >= valor) {
                        saldos[i] -= valor;
                        printf("Saque realizado. Novo saldo: %.2f\n", saldos[i]);
                    } else {
                        printf("Saldo insuficiente.\n");
                    }
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) printf("Conta nao encontrada.\n");
        } 
        else if (opcao == 3) {
            soma = 0;
            for (i = 0; i < 10; i++) {
                soma += saldos[i];
            }
            printf("Ativo bancario total: %.2f\n", soma);
        }
    } while (opcao != 4);

    printf("Programa finalizado.\n");
    return 0;
}

Atv003