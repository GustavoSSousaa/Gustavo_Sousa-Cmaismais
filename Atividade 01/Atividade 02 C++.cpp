#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sal, salimposto, salgra, salreceba;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite o salario do funcionario: ");
	// Recebe o salario
	scanf("%f%*c",&sal);
	// Calcula o novo salario
	salimposto = sal * 5/100;
	salgra = sal * 7/100;
	salreceba = sal + salgra - salimposto;
	
	// Mostra o novo salario
	printf("\nSalario Gratificação = %0.2f", salgra);
	printf("\nSalario Impostos = %0.2f", salimposto);
	printf("\nSalario A Receber = %0.2f", salreceba);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;
	
}