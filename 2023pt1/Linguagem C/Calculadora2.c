#include <stdio.h>
#include <locale.h>

int main(){
	
	float n1, n2, n3, R;
	
	setlocale(LC_ALL,"portuguese");
	printf("Calculadora basica");
	printf("\n0 = soma");
	printf("\n1= subta��o");
	printf("\n2= multiplica��o");
	printf("\n3= divis�o");
	printf("\ndigite qual opera��o:");
	scanf("%f", &n1);
	printf("\nprimeiro numero:");
	scanf("%f", &n2);
	printf("\nsegundo numero:");
	scanf("%f", &n3);
	
	if(n1 == 0){
		R = n2 + n3;
		printf("%.2f", R);
	}
	
	if(n1 == 1){
		R = n2 - n3;
		printf("%.2f", R);
	}
	
	if(n1 == 2){
		R = n2 * n3;
		printf("%.2f", R);
	}

	if(n1 == 3){
		R = n2 / n3;
		printf("%.2f", R);
	}
	if(n1 >=4){
		printf("\n?????");
	}
	if(n1 <0){
		printf("\n?????");
	}
	
	return 0;
}
