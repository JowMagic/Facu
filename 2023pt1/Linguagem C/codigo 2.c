#include<stdio.h>

int main(){
	int n;
			
	printf("primeira nota:");
	scanf("%d", &n);
	
	if(n == 1){
		printf("Escritu�rio");
	}else{
	if( n == 2 ){
		printf("Secret�ria");
	}else{
	if(n == 3){
		printf("Caixa");
	}else{
		if(n == 4){
		printf("Gerente");
	}else{
		if(n == 5){
		printf("Diretor");
	}else{
		if(n >= 5){
		printf("Codigo invalido");
	}
}
}
}
}
}
return 0;	
}
