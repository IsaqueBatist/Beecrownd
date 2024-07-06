#include <stdio.h>

int main() {
    int N, T, V, i, distanciaTotal=0, somaDistanciaTotal=0;

    scanf("%i", &N);

    for(i=0;i<N;i++){
        scanf("%i", &T);
        scanf("%i", &V);
        distanciaTotal = T*V;
        somaDistanciaTotal += distanciaTotal;
    }
    printf("%i\n", somaDistanciaTotal);

    return 0;
}
