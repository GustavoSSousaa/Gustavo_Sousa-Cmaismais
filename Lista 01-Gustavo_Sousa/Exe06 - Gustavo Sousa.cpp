#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, p1, p2, p3, media, np1, np2, np3, nt, pt;

    printf("Digite a 1ª nota e seu respectivo peso: ");
    scanf("%f%*c %f%*c", &n1, &p1);
    np1 = n1 * p1;

    printf("Digite a 2ª nota e seu respectivo peso: ");
    scanf("%f%*c %f%*c", &n2, &p2);
    np2 = n2 * p2;

    printf("Digite a 3ª nota e seu respectivo peso: ");
    scanf("%f%*c %f%*c", &n3, &p3);
    np3 = n3 * p3;

    nt = np1 + np2 + np3;
    pt = p1 + p2 + p3;

    media = nt / pt;

    printf("Média do aluno = %.1f", media);

    getchar();
    return 0;
}