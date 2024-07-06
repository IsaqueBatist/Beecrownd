#include <stdio.h>

int main() {
    int num, N, i,j, contador=0;

    scanf("%i", &N);

    for(i=0;i<N;i++){

        scanf("%i", &num);

        for(j=1;j<=num;j++){
            if(num%j==0){
                contador++;
            }else{
                continue;
            }
        }
        if(contador==2){
            printf("%i eh primo\n", num);
        }else {
            printf("%i nao eh primo\n", num);
        }

        contador=0;
    }


    return 0;
}
