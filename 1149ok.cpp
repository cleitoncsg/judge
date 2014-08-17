
#include <stdio.h>
#include <stdlib.h>

int main(){

	int A,N = -1;
	int i;
	int soma = 0;

	scanf("%d",&A);
	while(N <= 0)
		scanf("%d",&N);
	i = A;

	for (int j = 1; j <= N;j++){
		soma = soma + i;
		i++;
	}

	printf("%d\n",soma );
	

	return 0;
}

