#include <stdio.h>

int main() {
    int num, N, i,j, soma=0;

    scanf("%i", &N);

    for(i=0;i<N;i++){

        scanf("%i", &num);

        for(j=1;j<num;j++){
            if(num%j==0){
                soma+=j;
            }else{
                continue;
            }
        }
        if(soma==num){
            printf("%i eh perfeito\n", num);
        }else {
            printf("%i nao eh perfeito\n", num);
        }

        soma=0;
    }


    return 0;
}
