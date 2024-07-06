#include <stdio.h>

int main() {
    int A, N;

    scanf("%i", &A);
    do {
        scanf("%i", &N);
    } while (N <= 0);

    int soma = 0;
    for (int i = 0; i < N; i++) {
        soma += A + i;
    }
    printf("%d\n", soma);

    return 0;
}
