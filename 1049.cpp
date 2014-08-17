
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[50],nome2[50],nome3[50];

	scanf("%s",nome);
	scanf("%s",nome2);
	scanf("%s",nome3);

	if(strcmp(nome,"vertebrado") == 0 ){
		if(strcmp(nome2,"ave") == 0 ){
			if(strcmp(nome3,"carnivo") == 0 )
				printf("aguia\n");
			else if(strcmp(nome3,"onivoro") == 0 )
				printf("pomba\n");
		}
		else if(strcmp(nome2,"mamifero") == 0 ){
			if(strcmp(nome3,"onivoro") == 0 )
				printf("homem\n");
			else if(strcmp(nome3,"herbivoro") == 0 )
				printf("vaca\n");
		}
	}

	else if(strcmp(nome,"invertebrado") == 0 ){
		if(strcmp(nome2,"inseto") == 0 ){
			if(strcmp(nome3,"hematofago") == 0 )
				printf("pulga\n");
			else if(strcmp(nome3,"herbivoro") == 0 )
				printf("lagarta\n");
		}
		else if(strcmp(nome2,"analideo") == 0 ){
			if(strcmp(nome3,"hematofago") == 0 )
				printf("sanguessuga\n");
			else if(strcmp(nome3,"onivoro") == 0 )
				printf("minhoca\n");
		}
	}
	return 0;

}
