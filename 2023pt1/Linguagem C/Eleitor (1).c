#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int n;
			
	printf("idade:");
	scanf("%d", &n);
	
	if(n < 16){
		printf("N�o eleitor");
	}else{
		if(n >= 18 && n <= 65){
		printf("Obrigat�rio");
	}else{
		printf("Facultativo");
	}
}

return 0;
}
