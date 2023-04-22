#include <stdio.h>
#include <stdlib.h>
#define SOMAR(p1,p2) (p1 + p2)
#define SUBTRAIR(p1,p2)  (p1 - p2)
#define DIVIDIR(p1,p2) (p1 / p2)
#define MULTIPLICAR(p1, p2) (p1 * p2)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	float valor_1, valor_2, total, total2, total3, total4, total5;
	
	
	printf("Informe os valores:\n");
	scanf("%f %f",&valor_1, &valor_2);
	
	
	
	total = SOMAR(valor_1,valor_2);
	printf("RESULTADO SOMADO =  %f", total);
	
	total2 = SUBTRAIR(valor_1,valor_2);
	printf("\nRESULTADO SUBTRAIDO =  %f", total2);

	total3 = DIVIDIR(valor_1,valor_2);
	printf("\nRESULTADO DIVIDIDO =  %f", total3);

	total4 = MULTIPLICAR(valor_1,valor_2);
	printf("\nRESULTADO MULTIPLICADO =  %f", total4);










	getch();
	
}
