#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float A,B,C;
	float maior = -999;
	float menor = 999;
	float meio;

	scanf("%f %f %f",&A,&B,&C);

	if(A > maior) 
		maior = A;
	if (B > maior)
		maior = B;
	if(C > maior)
		maior = C;
	if(A < menor)
		menor = A;
	if (B < menor)
		menor = B;
	if(C < menor)
		menor = C;
	if(maior == A || maior == B)
		meio = C;
	if(maior == B || maior == C)
		meio == A;
	if(maior == A || maior == C)
		meio = B;
	printf("maior = %f\n", maior);
	printf("menor = %f\n", menor);
	printf("meio = %f\n", meio);

	if(maior >= meio + menor)
		printf("NAO FORMA UM TRIANGULO\n");
	if(maior > meio + menor)
		printf("TRIANGULO OBTUSANGULO\n");
	if(maior < meio + menor)
		printf("TRIANGULO ACUTANGULO\n");
	if(maior == meio &&  maior == menor )
		printf("TRIANGULO EQUILATERO\n");
	if((A == B && A != C) || (A == C && A != B) ||(B == C && B != A))
		printf("TRIANGULO ISOSCELES\n");

	return 0;
}
