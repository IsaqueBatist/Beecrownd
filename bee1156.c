#include <stdio.h>

int main() {
    double S=0, i, soma, numerador=1;
    for(i=1;i<=100;i*=2){
        soma = numerador/i;
        S+=soma;
    }
    printf("%.2lf\n", S);
    return 0;
}
