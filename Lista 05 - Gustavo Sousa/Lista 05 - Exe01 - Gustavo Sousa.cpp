#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoau, ano;
    float sal, aumento;

    sal = 1000;
    aumento = 1.5;

    printf("Qual ano você quer saber: ");
    scanf("%d%*c", &anoau);

    ano = 2021;

    do {
        sal = sal + (sal * (aumento / 100));
        aumento = aumento * 2;
        ano++;
    } while (ano <= anoau);

    printf("O salário atual é R$ %.2f, e o ano é %d\n", sal, anoau);

    return 0;
}
