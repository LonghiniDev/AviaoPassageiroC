#ifndef _tipos_
#define _tipos_

#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoPassageiro
{
	int idPassageiro;
	char nomePassageiro [64];
	struct tipoPassageiro *proximo;
}TPassageiro;

typedef struct tipoListaPassageiro
{
	TPassageiro *inicio;
	TPassageiro *fim;
}TListaPassageiro;

typedef struct tipoAviao
{
	int idAviao;
	struct tipoAviao *proximo;
	TListaPassageiro ListaPassageiro;
}TAviao;

typedef struct tipoListaAviao
{
	TAviao *inicio;
	TAviao *fim;
}TListaAviao;

void inicializarAviao(TListaAviao *p);
void inserirAviao(TListaAviao *p);
void apresentarAviao(TListaAviao *p);

void inicializarPassageiro(TListaPassageiro *p);
void inserirPassageiro(TListaPassageiro *p);
void apresentarPassageiro(TListaPassageiro *p);

void consultarPassageiro(TListaPassageiro *p);
void excluirPassageiro(TListaPassageiro *p);

#endif












