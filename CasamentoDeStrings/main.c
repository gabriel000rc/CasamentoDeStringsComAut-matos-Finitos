#include"CasamentoDeStrings.h"

int main()
{
    char palavra[MAX];
    char chave[MAX];
    int tipo;

    printf("Digite 1 para subpalavra, 2 para prefixo e 3 para sufixo.\n");
    scanf("%d",&tipo);

    printf("Digite a palavra\n");
    scanf("%s",palavra);

    printf("Digite a chave\n");
    scanf("%s",chave);

    printf("\n\n");

    if(tipo == 1){
        subpalavra(palavra, chave);
    }

    if(tipo == 2){
        prefixo(palavra,chave);
    }

    if(tipo == 3){
        sufixo(palavra,chave);
    }

    return 0;
}
