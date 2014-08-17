#include <stdio.h>
#include <stdlib.h>

int main(){
	int inicio,fim;
	int inicioMinuto, fimMinuto;
	int duracaoHora, duracaoMinuto;

	scanf("%d %d %d %d",&inicio,&inicioMinuto,&fim,&fimMinuto);

	if(fim > inicio)
		duracaoHora = fim - inicio;
	if(inicio > fim){
		inicio = 24 - inicio; 
		duracaoHora = fim + inicio;
	}
	if(fimMinuto > inicioMinuto){
		duracaoMinuto = fimMinuto - inicioMinuto;
	}
	if(inicioMinuto > fimMinuto){
		inicioMinuto = 60 - inicioMinuto;
		duracaoMinuto = fimMinuto + inicioMinuto;
	}
	if(duracaoMinuto != 0){
		duracaoHora = duracaoHora - 1;
	}
	if(duracaoHora*60 + duracaoMinuto < 1 || duracaoHora*60 + duracaoMinuto > 24*60)
		return 1;

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoHora,duracaoMinuto);

	return 0;
}
