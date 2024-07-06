#include <stdio.h>

int main() {
    float matriz[12][12], soma=0, media;
    int L, lin, col;
    char T;

    scanf("%i", &L);
    scanf(" %c", &T);
    for(lin=0;lin<12;lin++){
        for(col=0;col<12;col++){
            scanf("%f", &matriz[lin][col]);
        }
    }

    switch(T){
        case 'S':
            for(col=0;col<12;col++){
                soma+=matriz[L][col];
            }
            printf("%.1f\n", soma);
            break;
        case 'M':
            for(col=0;col<12;col++){
                soma+=matriz[L][col];
            }
            media=soma/12;
            printf("%.1f\n", media);
            break;
        default:
            break;
    }



    return 0;
}
