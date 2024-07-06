#include <stdio.h>

int main() {
    int feijao[4];
    int i, posicao;

    for(i=0;i<4;i++){
        scanf("%i", &feijao[i]);
        if(feijao[i] == 1){
            posicao=i;
        }
    }
    printf("%i\n", posicao+1);



    return 0;
}
