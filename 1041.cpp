#include <stdio.h>
#include <stdlib.h>

int main(){
	double x,y;
	scanf("%lf",&x);
	scanf("%lf",&y);

	if( x > 0 && y > 0)
		printf("Q1\n");
	if(x > 0 && y < 0)
		printf("Q4\n");
	if(x < 0 && y > 0)
		printf("Q2\n");
	if( x < 0 && y < 0)
		printf("Q3\n");
	if( x == 0 && y == 0)
		printf("Origem\n");

	return 0;
}
