
#include <stdio.h>
#include <stdlib.h>

int main(){

	int T;
	int controle = 3;
	int controle2 = 1;
	scanf("%d",&T);

	
	for(int i = 0; i < T; i++){
		for (int j = controle2; j <= controle ; j++){
			printf("%d ",j);
		}
		controle2 = controle2 + 4;
		controle = controle2 + 2;

		printf("PUM\n");
	}	

	return 0;
}
