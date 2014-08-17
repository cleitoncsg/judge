
#include <stdio.h>
#include <stdlib.h>

void soma(int segundo, int primeiro){
	int soma = 0;

	if(primeiro < segundo)
		for(int i = primeiro; i <= segundo; i++){
			soma = soma + i;
			printf("%d ", i);
		}

	if(primeiro > segundo)
		for(int i = segundo; i <= primeiro; i++){
			soma = soma + i;
			printf("%d ", i);
		}

	printf("Sum=%d\n",soma);
}
int main(){

	int primeiro, segundo;
	while(true){
		scanf("%d %d",&segundo, &primeiro);
		if(primeiro <= 0 || segundo <= 0)
			break;
		soma(segundo, primeiro);
	}

	return 0;
}

//2 3 4 5 Sum=14
