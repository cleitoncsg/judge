
#include <stdio.h>
#include <stdlib.h>

int main(){
	float i = 0,j = 1;
	int c = 1;
	int controle = 0;
	float k = 0;

	while(i <= 2.1){
		if(i == 0 && controle == 0){
			printf("I=%.0f J=%.0f\n",i,j);
			printf("I=%.0f J=%.0f\n",i,j+1);
			printf("I=%.0f J=%.0f\n",i,j+2);
			controle = 1;
		}
		else if ( i != 0)
			printf("I=%.1f J=%.1f\n",i,j + k);
		if(c % 3 == 0){
			i = i + 0.2;
			j = 0;
			k = k + 0.2;
		}

		j++;
		
		c++;
	}

	return 0;
}

