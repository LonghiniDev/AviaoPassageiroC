#include "tipos.h"

void inserirPassageiro(TListaPassageiro *p)
{
	tipoPassageiro *novo;
	
	novo = (tipoPassageiro*) malloc(sizeof(tipoPassageiro));
	//novo = new TElemento;
	
	printf("\n Informe o ID do Passageiro: ");
	scanf("%d", &novo->idPassageiro);
	novo->proximo = NULL;
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	// Inserção Ordenada Id Passageiro
	{
		if (novo->idPassageiro < p->inicio->idPassageiro)
		{
			novo->proximo = p->inicio;
			p->inicio = novo;
		}
		else
		{
			if (novo->idPassageiro >= p->fim->idPassageiro)
			{
				p->fim->proximo = novo;
				p->fim = novo;
			}
			else
			{
				TPassageiro *atual;
				TPassageiro *anterior;
				
				anterior = p->inicio;
				atual = p->inicio->proximo;
				
				while (atual != NULL)
				{
					if (atual->idPassageiro > novo->idPassageiro)
					{
						anterior->proximo = novo;
						novo->proximo = atual;
						atual = NULL;
					}
					else
					{
						anterior = atual;
						atual = atual->proximo;
					}
				}
			}
		}
		
	}
	
		
	printf("\n Informe seu nome: ");
	fflush(stdin);
	gets(novo->nomePassageiro);
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	// Inserção Ordenada Id Passageiro
	{
		if (novo->nomePassageiro < p->inicio->nomePassageiro)
		{
			novo->proximo = p->inicio;
			p->inicio = novo;
		}
		else
		{
			if (novo->nomePassageiro >= p->fim->nomePassageiro)
			{
				p->fim->proximo = novo;
				p->fim = novo;
			}
			else
			{
				TPassageiro *atual;
				TPassageiro *anterior;
				
				anterior = p->inicio;
				atual = p->inicio->proximo;
				
				while (atual != NULL)
				{
					if (atual->nomePassageiro > novo->nomePassageiro)
					{
						anterior->proximo = novo;
						novo->proximo = atual;
						atual = NULL;
					}
					else
					{
						anterior = atual;
						atual = atual->proximo;
					}
				}
			}
		}
	}
}










