#include <stdio.h>
#include <locale.h>

#define media(a,b,c,d) ((a+b+c+d)/4)

int main(){
	setlocale(LC_ALL, "");	
	
	int p1, p2, p3, p4;
	
	
	printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	
	printf("M�dia dos n�meros inseridos:  %d", media(n1,n2,n3,n4));	
	
	
	
	
	
	
	return 0;
}
