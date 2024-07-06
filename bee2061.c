#include <stdio.h>
#include <string.h>

int main() {
    char acao[7];
    int N, M, i, numeroDeAbas;

    scanf("%i %i", &N, &M);
    numeroDeAbas = N;

    for(i=0;i<M;i++){

        if(numeroDeAbas<0){
            break;
        }

        scanf(" %s", &acao);

        if(strcmp(acao, "fechou") == 0){
            numeroDeAbas++;
        }else if (strcmp(acao, "clicou") == 0){
            numeroDeAbas--;
        }

    }
    printf("%i\n", numeroDeAbas);


    return 0;
}
