
#include <stdio.h>
#include <stdlib.h>

int main(){

	long numero;

	scanf("%ld",&numero);

	for(int i = 1; i <= numero; i++){
		if(i % 2 == 0)
			printf("%d^%d = %d\n",i,i,i*i);
	}
	
	return 0;
}
