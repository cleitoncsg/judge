
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;

	while(numero != EOF){
		scanf("%d",&numero);

		if(numero == 0)
			printf("vai ter copa!\n");
		else
			printf("vai ter duas!\n");
		
	}
	
	return 0;
}
