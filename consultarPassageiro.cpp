#include "tipos.h"

void consultarPassageiro (TListaPassageiro *p)
{
	int valorConsulta;
	
	printf("\n Informe o ID do Passageiro para consulta: ");
	scanf("%d", &valorConsulta);
	
	TPassageiro *atual;
	atual = p->inicio;
	
	while (atual != NULL)
	{
		if (atual->idPassageiro == valorConsulta)
		{
			printf("\n Passageiro encontrado!");
			break;
		}
		else
		{
			atual = atual->proximo;
		}
	}
	if (atual == NULL)
	{
		printf("\n  Passageiro não encontrado!");
	}
}
