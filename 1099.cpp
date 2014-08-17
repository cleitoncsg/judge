
#include <stdio.h>
#include <stdlib.h>

void detecta_primo(int numero1, int numero2){
	int somaPrimo = 0;
	int cont;
	int i,j;

	if(numero1 < numero2){
		i = numero1+1;
		while(i < numero2){
			cont = 0;
			for (j = 1; j <= i; j++){

				if(i/j == 0){
					printf("J = %d \n", j);
					cont++;
				}
			}
			if(cont <= 2){
				printf("Primo %d\n",i);
				somaPrimo = somaPrimo + i;
			}
			i++;
		}
				
	}
	if(numero1 > numero2){
		for(i = numero2+1; i < numero1;i++){
			cont = 0;
			for (j = 1; j <= i; j++){

				if(i/j == 0)
					cont++;
			}
			if(cont <= 2)
				somaPrimo = somaPrimo + i;
		}
	}


	printf("%d\n",somaPrimo );

}

int main(){

	int N;
	int numero2, numero1;

	scanf("%d",&N);

	for(int i = 1; i <= N ;i++){
		scanf("%d %d",&numero1,&numero2);
		detecta_primo(numero1,numero2);
	}
	
	return 0;
}
