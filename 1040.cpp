
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float N1,N2,N3,N4;
	float notaExame;
	float media;

	scanf("%f",&N1);
	scanf("%f",&N2);
	scanf("%f",&N3);
	scanf("%f",&N4);

	media = (N1*2 + N2*3 + N3*4 + N1*1)/10.0;

	printf("Media: %.1f\n",media);

	if(media > 7.0){
		printf("Aluno aprovado.\n");
	}
	else if(media < 5.0){
		printf("Aluno reprovado.\n");
	}

	if(media >= 5 && media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f",&notaExame);
		printf("Nota do exame: %.1f\n",notaExame );
		media = (media + notaExame)/2;
		if(media >= 5){
			printf("Aluno aprovado.\n");
		}
		else if(media <= 4.9){
			printf("Aluno reprovado.\n");
		}
	}
	printf("Media final: %.1f\n",media );

	return 0;
}
