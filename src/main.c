#include "Lista.h"

int main() {

    Lista L;
    FLVazia(&L);

    if(!LerArquivo(&L)) {
        exit(1);
    }
    VerificaRepeticao(&L);

    printf("Lista sem Nomes Repetidos:\n");


    Imprime(&L);
    return 0;
}