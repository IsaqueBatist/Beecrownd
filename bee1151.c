#include <stdio.h>

int main() {
    int N, i;
    int fibonacci[46];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    scanf("%i", &N);
    for(i=0;i<N;i++){
        if(i == 0){
            printf("0 ");
        }else if (i == 1){
            printf("1 ");
        }else if(i==N-1){
            printf("%i\n", fibonacci[i-1] + fibonacci[i-2]);
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }else {
            printf("%i ", fibonacci[i-1] + fibonacci[i-2]);
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }

    }
    return 0;
}
