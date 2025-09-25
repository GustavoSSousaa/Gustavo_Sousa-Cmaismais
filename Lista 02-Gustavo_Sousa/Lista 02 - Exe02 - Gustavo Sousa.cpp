#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int idade ;
	// Mostra mensagem antes da leitura do salario
	printf("\nDigite a sua IDADE: ");
	scanf("%d%*c",&idade);
	if (idade <= 12)
	printf("\nVoce é criança %0.2d", idade);
	else if (idade >12 && idade <18)
	printf("\nVoce é adolecente %0.2d", idade);
	else if (idade >19 && idade <24)
	printf("\nVoce é jovem %0.2d", idade);
	else if (idade >24 && idade <59)
	printf("\nVoce é adulto %0.2d", idade);
	else
	printf("\nVoce é idoso %0.2d", idade);
	// Para o programa a espera de um ENTER
	getchar();
	return 0;	
}