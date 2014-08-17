
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N = 12;
	int x[N],y[N];
	int i;

	for( i = 0;;i++){
		scanf("%d",&x[i]);
	    scanf("%d",&y[i]);

		if( x[i] == 0 || y[i] == 0)
			break;
		else
			N++;
	}
	for( i = 0; i < N - 12;i++){
		if( x[i] > 0 && y[i] > 0)
			printf("primeiro\n");
		if(x[i] > 0 && y[i] < 0)
			printf("quarto\n");
		if(x[i] < 0 && y[i] > 0)
			printf("segundo\n");
		if( x[i] < 0 && y[i] < 0)
			printf("terceiro\n");
	}

	
	return 0;
}
