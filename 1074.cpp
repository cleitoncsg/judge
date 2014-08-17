#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	int numero;

	scanf("%d",&N);

	for(int i = 1; i <= N; i++){
		scanf("%d",&numero);
		if(numero % 2 == 0)
			printf("EVEN\n" );
		else
			printf("ODD\n");
		if(numero > 0)
			printf("POSITIVE\n");
		else
			printf("NEGATIVE\n");
		if(numero == 0)
			printf("NULL\n");

	}

	return 0;
}
