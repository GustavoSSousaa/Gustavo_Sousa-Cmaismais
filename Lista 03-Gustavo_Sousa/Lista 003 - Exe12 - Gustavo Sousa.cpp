#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia, mes;

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mês do seu nascimento (1-12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            if (dia <= 19)
                printf("Seu signo é Capricórnio\n");
            else
                printf("Seu signo é Aquário\n");
            break;

        case 2:
            if (dia <= 18)
                printf("Seu signo é Aquário\n");
            else
                printf("Seu signo é Peixes\n");
            break;

        case 3:
            if (dia <= 20)
                printf("Seu signo é Peixes\n");
            else
                printf("Seu signo é Áries\n");
            break;

        case 4:
            if (dia <= 19)
                printf("Seu signo é Áries\n");
            else
                printf("Seu signo é Touro\n");
            break;

        case 5:
            if (dia <= 20)
                printf("Seu signo é Touro\n");
            else
                printf("Seu signo é Gêmeos\n");
            break;

        case 6:
            if (dia <= 21)
                printf("Seu signo é Gêmeos\n");
            else
                printf("Seu signo é Câncer\n");
            break;

        case 7:
            if (dia <= 22)
                printf("Seu signo é Câncer\n");
            else
                printf("Seu signo é Leão\n");
            break;

        case 8:
            if (dia <= 22)
                printf("Seu signo é Leão\n");
            else
                printf("Seu signo é Virgem\n");
            break;

        case 9:
            if (dia <= 22)
                printf("Seu signo é Virgem\n");
            else
                printf("Seu signo é Libra\n");
            break;

        case 10:
            if (dia <= 22)
                printf("Seu signo é Libra\n");
            else
                printf("Seu signo é Escorpião\n");
            break;

        case 11:
            if (dia <= 21)
                printf("Seu signo é Escorpião\n");
            else
                printf("Seu signo é Sagitário\n");
            break;

        case 12:
            if (dia <= 21)
                printf("Seu signo é Sagitário\n");
            else
                printf("Seu signo é Capricórnio\n");
            break;

        default:
            printf("Mês inválido!\n");
            break;
    }

    return 0;
}