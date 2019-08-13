#include "tipos.h"

void inserirAviao(TListaAviao *p)
{
	tipoAviao *novo;
	
	novo = (tipoAviao*) malloc(sizeof(tipoAviao));
	//novo = new TElemento;
	
	printf("\n Informe o ID do Avião: ");
	scanf("%d", &novo->idAviao);
	novo->proximo = NULL;
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		p->fim->proximo = novo;
		p->fim = novo;
	}
}











