#include <stdio.h>

int main() {
    int aluno = 1;                  
    float nota1, nota2, media;      
    int aprovados = 0, reprovados = 0, exame = 0;  
    float somaMedias = 0;           
    
    while (aluno <= 6) {
        printf("Digite as duas notas do %dº aluno: ", aluno);
        scanf("%f %f", &nota1, &nota2);

        media = (nota1 + nota2) / 2.0;
        printf("Média do %dº aluno = %.2f", aluno, media);

        if (media <= 3) {
            printf(" -> Reprovado\n");
            reprovados++;
        } else if (media < 7) {
            printf(" -> Exame\n");
            exame++;
        } else {
            printf(" -> Aprovado\n");
            aprovados++;
        }

        somaMedias += media;
        aluno++;
    }

    printf("\nResumo Final:\n");
    printf("Total de reprovados = %d\n", reprovados);
    printf("Total de alunos em exame = %d\n", exame);
    printf("Total de aprovados = %d\n", aprovados);
    printf("Média da classe = %.2f\n", somaMedias / 6);

    return 0;
}