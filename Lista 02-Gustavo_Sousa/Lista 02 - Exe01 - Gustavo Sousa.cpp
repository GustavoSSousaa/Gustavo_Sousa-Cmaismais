#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, conta, conta2 ;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o 1° numero: ");
	scanf("%f%*c",&n1);
	printf("\nDigite o 2° numero: ");
	scanf("%f%*c",&n2);
	printf("\nDigite o 3° numero: ");
	scanf("%f%*c",&n3);
	if (n1 > n2 && n1 > n3)
	printf("\nO maior numero é %0.2f", n1);
	else if (n2 > n1 && n2 > n3)
	printf("\nO maior numero é %0.2f", n2);
	else if (n3 > n1 && n3 > n2)
	printf("\nO maior numero é %0.2f", n3);
	
	// Para o programa a espera de um ENTER
	getchar();
	return 0;	
}