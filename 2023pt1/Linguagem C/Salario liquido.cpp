#include <stdio.h>
#include <locale.h>

int main(){
	
	float SM, HT, VHT, SB, imp, SL;
	
	setlocale(LC_ALL,"portuguese");
	printf("Sal�rio minimo:");
	scanf("%f", &SM);
	printf("\nHoras Trabalhada:");
	scanf("%f", &HT);
	
	VHT = SM/2;
	
	SB = HT * VHT;
	
	imp = SB * 0.03;
	
	SL = SB - imp;
	
	printf("\nSal�rio liquido:%.2f", SL);
	
	return 0;
}
	
