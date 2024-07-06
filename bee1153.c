#include <stdio.h>

int main() {
    int num, i, fatorial=0, faotiral2=0;

    scanf("%i", &num);
    fatorial = num;
    for(i=num-1;i>0;i--){
        fatorial *= i;
    }
    printf("%i\n", fatorial);
    return 0;
}
