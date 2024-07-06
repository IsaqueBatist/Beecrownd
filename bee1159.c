#include <stdio.h>

int main(){
    int X, i, soma;

    while(1){
        scanf("%d", &X);
        if (X == 0){
            break;
        }

        soma = 0;
        if (X % 2 != 0) {
            X++;
        }

        for (i = 0; i < 5; i++) {
            soma += X;
            X += 2;
        }

        printf("%d\n", soma);
    }

    return 0;
}
