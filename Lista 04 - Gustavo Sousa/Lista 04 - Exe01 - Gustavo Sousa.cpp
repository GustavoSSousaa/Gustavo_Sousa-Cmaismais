#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int anoau, ano;
	float sal, aumento;
	
	sal = 1000;
	aumento = 1.5;
	
	printf("Qual ano voce quer saber: ");
	scanf("%d%*c",&anoau);
	for (ano= 2019; ano<=anoau; ano++){
		sal = sal + (sal * (aumento / 100));
		if (ano >= 2020){
			aumento = aumento*2;
		}

	}
	printf("O salario atual é R$ %.2f, e o ano é %d\n", sal, anoau);
	return 0;
}