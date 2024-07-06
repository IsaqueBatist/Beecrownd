#include <stdio.h>

int main() {
    int numeroCompetidores, papeisComprados, quamtidadeDePapelporJogador;

    scanf("%i %i %i", &numeroCompetidores, &papeisComprados, &quamtidadeDePapelporJogador);

    if(numeroCompetidores*quamtidadeDePapelporJogador <= papeisComprados){
        printf("S\n");
    }else{
        printf("N\n");
    }


    return 0;
}
