#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXTAM 100
#define TAM_NOME 50
#define TAM_ARQUIVO 40

typedef struct Item Item;
typedef struct Lista Lista;

struct Item
{
    char value[TAM_NOME];
    int repeticao;
};

struct Lista
{
    Item vet[MAXTAM];
    int Primeiro;
    int Ultimo;
};

bool LerArquivo(Lista *l);

bool Insere(Lista *lista, Item *d);

void FLVazia(Lista *lista);

void Imprime(Lista *lista);

void VerificaRepeticao(Lista *l);

void RemoverRepeticao(Lista *l, Item *d, int posicao);

int EncontrarEspaco(Lista *l);

