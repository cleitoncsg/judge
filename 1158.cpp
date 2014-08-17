
#include <stdio.h>
#include <stdlib.h>

int main(){

	int x,y,n;
	int cont = 0;
	int soma = 0;
	int quantidade = 0;

	scanf("%d",&n);
	int vetor[n];

	while(quantidade < n){
		scanf("%d",&x);
		scanf("%d",&y);

		for (int j = x; cont !=y ;j++){
			if(j % 2 == 1){
				soma = soma + j;
				cont++;
			}
		}
		vetor[quantidade] = soma;
		soma = 0;
		cont = 0;
		quantidade++;
	}

	for (int i = 0; i < quantidade; i++)
	{
		printf("%d\n",vetor[i] );
	}

	return 0;
}

