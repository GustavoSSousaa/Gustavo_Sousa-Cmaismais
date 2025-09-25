#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, conta, conta2 ;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o 1° numero: ");
	scanf("%f%*c",&n1);
	printf("\nDigite o 2° numero: ");
	scanf("%f%*c",&n2);
	printf("\nDigite o 3° numero: ");
	scanf("%f%*c",&n3);
	// Calcula o novo salario
	conta = n1 + n2 + n3;
	conta2 = conta /3;
	// Mostra o novo salario
	printf("\nA Media é igual a= %0.2f", conta2);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;	
}