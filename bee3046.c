#include <stdio.h>

int main() {
    int N, numeroPecas;

    scanf("%i", &N);
    numeroPecas = ((N+1)*(N+2))/2;
    printf("%i\n", numeroPecas);
    return 0;
}
