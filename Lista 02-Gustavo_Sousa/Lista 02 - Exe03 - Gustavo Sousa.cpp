#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2;

    printf("\nDigite o 1° número: ");
    scanf("%f%*c", &n1);
    printf("\nDigite o 2° número: ");
    scanf("%f%*c", &n2);

    if (n1 > n2) {
        printf("\nOrdem certa: %.2f", n2);
        printf("\n%.2f", n1);
    } else {
        printf("\nOrdem certa: %.2f", n1);
        printf("\n%.2f", n2);
    }

    getchar();
    return 0;
}
