#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int codigo;
	printf("Digite o numero:");
	scanf("%d", &codigo);
	
	switch (codigo){
		case 1:	
			printf("Escritu�rio");
			break;
		case 2:
			printf("Secret�ria");
			break;
		case 3:
			printf("Caixa");
			break;
		case 4:
			printf("Gerente");
			break;
		case 5:
			printf("Diretor");
			break;
		defaul	t:
			printf("Codigo invalido");
	}
 return 0;
}

