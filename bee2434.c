#include <stdio.h>

int main() {
    int diasPeriodoEnteresse, saldo, menorValorConta, valorColocadonaConta, i;

    scanf("%i %i", &diasPeriodoEnteresse, &saldo);
    menorValorConta = saldo;
    for(i=0;i<diasPeriodoEnteresse;i++){

        scanf("%i", &valorColocadonaConta);

        saldo += valorColocadonaConta;

        if(saldo<menorValorConta){
            menorValorConta = saldo;
        }else {
            continue;
        }
    }
    printf("%i\n", menorValorConta);
    return 0;
}
