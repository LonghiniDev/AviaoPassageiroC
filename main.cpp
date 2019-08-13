#include "tipos.h"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	TListaAviao L1;
	TListaPassageiro L2;
	
	inicializarAviao(&L1);
	inicializarPassageiro(&L2);
	
		do{
		printf("\n 1 - Inserir Avião		    ");
		printf("\n 2 - Inserir Passageiro   	");
		printf("\n 3 - Apresentar Aviões 	    ");
		printf("\n 4 - Apresentar Passageiros	");
		printf("\n 5 - Consultar Passageiro	");
		printf("\n 6 - Excluir Passageiro	");
		printf("\n Opção:");
		scanf("%d",&opcao);
		
		switch(opcao){
		case 1: inserirAviao(&L1); break;
		case 2: inserirPassageiro(&L2); break;
		case 3: apresentarAviao(&L1); break;
		case 4: apresentarPassageiro(&L2); break;
		case 5: consultarPassageiro(&L2); break;
		case 6: excluirPassageiro(&L2); break;
		}
		
	}while(opcao!=0);
}
