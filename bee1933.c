#include <stdio.h>

int main() {
    int A, B;

    scanf("%i %i", &A, &B);

    if(A>B){
        printf("%i", A);
    }else {
        printf("%i", B);
    }
    return 0;
}
