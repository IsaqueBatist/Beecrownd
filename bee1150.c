#include <stdio.h>

int main() {
    int X, Z, i, soma=0, contadorNumeos=0;

    scanf("%i", &X);
    do{
        scanf("%i", &Z);
    }while(Z<=X);

    for(i=X;soma<=Z;i++){
        soma += i;
        contadorNumeos++;
    }
    printf("%i\n", contadorNumeos);

    return 0;
}
