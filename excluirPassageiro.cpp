#include "tipos.h"

void excluirPassageiro(TListaPassageiro *p)
{
	int valorExclusao;
	
	printf("\n Informe o ID do passageiro para exclusao: ");
	scanf("%d", &valorExclusao);
	
	TPassageiro *atual, *anterior;
	
	atual = p->inicio;
	anterior = p->inicio;
	
	while (atual != NULL)
	{
		if (valorExclusao == atual->idPassageiro)
		{
			if (atual == p->inicio)
			{
				p->inicio = p->inicio->proximo;
			}
			else
			{
				anterior->proximo = atual->proximo;
				if (atual == p->fim)
				{
					p->fim = anterior;
				}
			}
			free(atual);
			break;
		}
		else
		{
			anterior = atual;
			atual = atual->proximo;
		}
	}
}
