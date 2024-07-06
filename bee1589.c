#include <stdio.h>

int main() {
    int T, R1, R2, i;

    scanf("%i", &T);

    for(i=0;i<T;i++){
        scanf("%i %i", &R1, &R2);
        printf("%i\n", R1+R2);
    }
    return 0;
}
