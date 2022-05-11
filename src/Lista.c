#include "Lista.h"

void FLVazia(Lista *lista) {
    lista->Primeiro = 0;
    lista->Ultimo = 0;
}

bool Insere(Lista *lista, Item *d) {
    int aux = EncontrarEspaco(lista);
    if(lista->Ultimo >= MAXTAM && aux != -1) {
        printf("LISTA CHEIA!\n");
        return false;
    } 
    if(aux == -1) {
        aux = lista->Ultimo;
	    lista->Ultimo++;
    }
	strcpy(lista->vet[aux].value, d->value);
    lista->vet[aux].repeticao = 0;
    return true;
}

void VerificaRepeticao(Lista *l) {
    for(int i=0; i<l->Ultimo; i++) {
        if(!(strcmp(l->vet[i].value, "") == 0)) {
            RemoverRepeticao(l, &l->vet[i], i);
        }
    }
}

void RemoverRepeticao(Lista *l, Item *d, int pos) {
    for(int i=(pos+1); i<l->Ultimo; i++) {
        if(strcmp(d->value, l->vet[i].value) == 0) {
            d->repeticao++;
            strcpy(l->vet[i].value, "");
            l->vet[i].repeticao = -1;
        }
    }
}

int EncontrarEspaco(Lista *l) {
    int aux =-1;
    for(int i=0; i<l->Ultimo; i++) {
        if(strcmp(l->vet[i].value, "") == 0) {
            aux = i;
            i = l->Ultimo;
        }
    }
    return aux;
}

bool LerArquivo(Lista *l) {
    FILE *fp;
    Item D;
    char str[TAM_NOME];
    char arquivo[TAM_ARQUIVO];

    printf("Nome do arquivo: 'sem o .txt'");
	fgets(arquivo, TAM_ARQUIVO-4, stdin);
	strtok(arquivo, "\n");
    strcat(arquivo,".txt");
    
    fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("\nErro ao abrir o arquivo!\n");
        exit(1);
    } else {
        while(fgets(str, TAM_NOME, fp) != NULL) {
            strtok(str, "\n");
            strcpy(D.value, str);
            Insere(l, &D);
        }
        printf("\nLista Primaria: \n\n");
        Imprime(l);
    }
    fclose(fp);
    return true;
}

void Imprime(Lista *lista) {
    if(lista->Primeiro == lista->Ultimo) {
        printf("LISTA VAZIA!\n");
        return;
    }
    for(int i=0; i<lista->Ultimo; i++) {
        if(lista->vet[i].repeticao != -1) {
            printf("%s\n",lista->vet[i].value);

        }
    }
}