#include <stdio.h>
#include <locale.h>

#define maioridade  18

int main(){
	setlocale(LC_ALL, "");	
	
	
	char nome[20];
	int i;
	
	printf("Insira seu Nome e sua Idade:  ");
	scanf("%s %d", &nome, &i);
	
	if(idade>=maioridade){
		printf(" %s � maior de idade!");
	}	else if(idade<maioridade){
			printf(" %s � menor de idade!");
		}
	
	
	
	
	
	
	return 0;
}

