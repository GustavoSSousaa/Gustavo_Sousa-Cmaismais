#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b;
    printf("Digite 2 números: ");
    scanf("%f %f", &a, &b);

    if (b != 0)
        printf("Resultado: %.2f\n", a / b);
    else
        printf("Não posso dividir por 0\n");

    return 0;
}
