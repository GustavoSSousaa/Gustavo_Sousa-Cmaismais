#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sal, taxa, salreceba, saltaxa;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o salario do funcionario: ");
	// Recebe o salario
	scanf("%f%*c",&sal);
	printf("\nDigite a taxa de juros: ");
	// Recebe a taxa
	scanf("%f%*c",&taxa);
	// Calcula o novo salario
	saltaxa = sal * taxa / 100;
	salreceba= sal + saltaxa;
	
	// Mostra o novo salario
	printf("\nTaxa = %0.2f", saltaxa);
	printf("\nSalario com a taxa = %0.2f", salreceba);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;
	
}