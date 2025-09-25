#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sal, salaumento, salreceba;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o salario do funcionario: ");
	// Recebe o salario
	scanf("%f%*c",&sal);
	// Calcula o novo salario
	salaumento = sal * 25/100;
	salreceba = sal + salaumento;
	
	// Mostra o novo salario
	printf("\nSalario = %0.2f", sal);
	printf("\nSalario Aumento = %0.2f", salaumento);
	printf("\nSalario A Receber = %0.2f", salreceba);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;
	
}