#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int op;
    float sal, conta, imp;
    

    printf("Menu de Opcões \n");
    printf("1 | Imporsto \n");
    printf("2 | Novo Salario \n");
    printf("3 | Classificação \n");
    printf("Escolha uma das opçoes: \n");
    scanf("%d", &op);

switch (op) {
        case 1:
        	printf("Digite seu salario e clique Enter\n");
        	scanf("%f", &sal);
        	if(sal < 500){
        	imp = sal * 5/100;
        	printf("Voce paga %.2f de Imposto sobre seu salario",imp );	
			}
        	
        	else if(sal > 500 && sal <850){
        		imp = sal * 10/100;
        		printf("Voce paga %.2f de Imposto sobre seu salario",imp );
			}
        	else{
        	    imp = sal * 15/100;
        		printf("Voce paga %.2f de Imposto sobre seu salario",imp );	
			}
			case 2:
        	printf("Digite seu salario e clique Enter\n");
        	scanf("%f", &sal);
        	if(sal > 1500){;
        	printf("Seu salario é %2.f",sal + 25 );	
			}
        	
        	else if(sal > 750 && sal <1500){
        		printf("Seu salario é %2.f",sal + 50 );
			}
			
			else if(sal > 450 && sal <750){
        		printf("Seu salario é %2.f",sal + 75 );
			}
        	else{
        		printf("Seu salario é %2.f",sal + 100 );	
			}
			case 3:
        	printf("Digite seu salario e clique Enter\n");
        	scanf("%f", &sal);
        	if(sal < 750){
        	printf("MAL REMUNERADO" );	
			}
        	else{
        		printf("BEM REMUNERADO" );	
			}
return 0;
}}