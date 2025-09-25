#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float pes, padraopes, jarda, milha ;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite a medida em PÉS: ");
	// Recebe o salario
	scanf("%f%*c",&pes);
	// Calcula o novo salario
	padraopes = pes * 12;
	jarda = pes / 3;
	milha = pes / 5280;
	// Mostra o novo salario
	printf("\nPES= %0.2f", pes);
	printf("\nJARDA= %0.2f", jarda);
	printf("\nMILHA= %0.6f", milha);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;
	
}