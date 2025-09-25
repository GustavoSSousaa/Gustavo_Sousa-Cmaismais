#include <stdio.h>
main(){
	char ch;
	printf("\nDigite uma letra entre A e Z : ");
	ch = getchar();
	if (ch >= 'A' && ch <= 'Z')
		printf("voce acertou");	
}
