#include <stdio.h>

int main() {
    double S=0, i, soma;
    for(i=1;i<=100;i++){
        soma = 1/i;
        S+=soma;
    }
    printf("%.2lf\n", S);
    return 0;
}
