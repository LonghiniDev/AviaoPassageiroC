#include "tipos.h"

void apresentarAviao(TListaAviao *p)
{
	tipoAviao *aux;
	aux = p->inicio;
	
	while (aux != NULL)
	{
		printf("\n Id do Avi�o: %d", aux->idAviao);
		aux = aux->proximo;
		break;
	}
}












