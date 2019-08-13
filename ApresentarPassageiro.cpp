#include "tipos.h"

void apresentarPassageiro(TListaPassageiro *p)
{
	tipoPassageiro *aux;
	aux = p->inicio;
	
	while (aux != NULL)
	{
		printf("\n Id do Passageiro: %d", aux->idPassageiro);
		aux = aux->proximo;
		
		printf("\n Nome do Passageiro: %d", aux->nomePassageiro);
		aux = aux->proximo;
		break;
	}
}












