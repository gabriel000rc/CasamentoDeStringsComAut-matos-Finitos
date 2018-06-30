#include"CasamentoDeStrings.h"


void prefixo(char *palavra, char *chave){

    int TamPalavra = strlen(palavra);
    int TamChave   = strlen(chave);

    if(TamPalavra < TamChave){
        erroChavePalavra();
        return;
    }

    int i;

    for(i = 0; i< TamChave; ++i){


        if(palavra[i] != chave[i]){
            printf("Nao e' prefixo\n");
            return;
        }
    }

    printf("E' prefixo\n");
}

void sufixo(char *palavra, char *chave){

    int TamPalavra = strlen(palavra);
    int TamChave   = strlen(chave);
    int c = TamChave-1, p = TamPalavra-1;

    if(TamPalavra < TamChave){
        erroChavePalavra();
        return;
    }

    for(; c>=0;--c,--p){

        if(palavra[p] != chave[c]){
            printf("Nao e' sufixo\n");
            return;
        }
    }


    printf("E' sufixo\n");


}

void subpalavra(char *palavra, char *chave){

    int TamPalavra = strlen(palavra);
    int TamChave   = strlen(chave);

     if(TamPalavra < TamChave){
        erroChavePalavra();
        return;
    }

    int c = TamChave-1, p = TamPalavra-1;

    for(;p>=0;--p){

        if(chave[c] == palavra[p]){
            --c;
            if(c == -1){
                printf("E' sub palavra\n\n");
                return;
            }
        }
        else{
            c = TamChave-1;
        }
    }

    printf("Nao e' sub palavra \n\n");



}

void erroChavePalavra(){

    printf("ESTA CHAVE NAO CABE NA PALAVRA\n\n");
}
