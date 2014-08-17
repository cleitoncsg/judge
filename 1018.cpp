#include <stdio.h>
#include <stdlib.h>

int main(){
	int valorDinheiro,guardaValorDinheiro;
	int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0;
	int notas5 = 0, notas2 = 0, notas1 = 0;

	scanf("%d",&guardaValorDinheiro);
	valorDinheiro = guardaValorDinheiro;

	while (valorDinheiro > 100){
		notas100++;
		valorDinheiro = valorDinheiro - 100;
	}
	while (valorDinheiro > 50){
		notas50++;
		valorDinheiro = valorDinheiro - 50;
	}
	while (valorDinheiro > 20){
		notas20++;
		valorDinheiro = valorDinheiro - 20;
	}
	while (valorDinheiro > 10){
		notas10++;
		valorDinheiro = valorDinheiro - 10;
	}
	while (valorDinheiro > 5){
		notas5++;
		valorDinheiro = valorDinheiro - 5;
	}
	while (valorDinheiro > 2){
		notas2++;
		valorDinheiro = valorDinheiro - 2;
	}
	while (valorDinheiro >= 1){
		notas1++;
		valorDinheiro = valorDinheiro - 1;
	}

	printf("%d\n",guardaValorDinheiro);
	printf("%d nota(s) de R$ 100,00\n",notas100);
	printf("%d nota(s) de R$ 50,00\n",notas50);
	printf("%d nota(s) de R$ 20,00\n",notas20);
	printf("%d nota(s) de R$ 10,00\n",notas10);
	printf("%d nota(s) de R$ 5,00\n",notas5);
	printf("%d nota(s) de R$ 2,00\n",notas2);
	printf("%d nota(s) de R$ 1,00\n",notas1);

	return 0;
}

