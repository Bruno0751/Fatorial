#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	int fatorial;
	int op;
	int resposta = 1;
	int guardar;

	do{
		printf("       +-----------------Escolha Sua Op��o------------------------------+\n"
			"       | 0 --- Sair                                                     |\n"
			"       | 1 --- Calculadora de Fatorial                                  |\n"
			"       +----------------------------------------------------------------+\n\n"
			"\nDigite a Op��o: ");
		scanf("%i", &op);
		
		switch(op){
			case 0:
				printf("\nSistema Encerrado\n\n");
			break;
			case 1:
				printf("Digite o N�mero a Ser Fatorado: ");
				scanf("%i", &fatorial);
				guardar = fatorial;
				
				for( ; fatorial >=1 ; --fatorial){
					resposta *= fatorial;
				}
				printf("\nO Fatorial de %i � %i\n\n", guardar, resposta);
			break;
			default:
				printf("\nOp��o Inv�lida\n\n");
			break;
		}
	}while(op != 0);
}
