
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QUANTIDADE 100
int main(){

	char vetorX[100][100];
	char vetorY[100][100];
	char nome[] = "l";

	for(int i = 0; i < QUANTIDADE; i++){
		scanf("%s", vetorX[i]);

		if(atof(vetorX[i]) <= 10){
			strcpy(vetorY[i],vetorX[i]);
		}
		if(atof(vetorX[i]) > 10){
			strcpy(vetorY[i], nome);
		}
	}

	for (int i = 0; i < QUANTIDADE; i++){
		if(strcmp(vetorY[i],nome) != 0)
			printf("A[%d] = %s\n",i,vetorY[i] );
	}	

	return 0;
}
