#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sal, novosal;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o salario do funcionario: ");
	// Recebe o salario
	scanf("%f%*c",&sal);
	// Calcula o novo salario
	novosal = sal + sal * 25/100;
	// Mostra o novo salario
	printf("\nNovo salario = %0.2f", novosal);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;
	
}