#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, conta ;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o 1° numero: ");
	scanf("%f%*c",&n1);
	printf("\nDigite o 2° numero: ");
	scanf("%f%*c",&n2);
	printf("\nDigite o 3° numero: ");
	scanf("%f%*c",&n3);
	printf("\nDigite o 4° numero: ");
	scanf("%f%*c",&n4);
	// Calcula o novo salario
	conta = n1 + n2 + n3 + n4;
	// Mostra o novo salario
	printf("\nA soma dos 4 numeros = %0.2f", conta);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;	
}