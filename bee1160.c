#include <stdio.h>

int main() {
    int i, contadorAnos=0;
    int T, populacaoA, populacaoB;
    float crescimentoPopulacionaA, crescimentoPopulacionaB;

    scanf("%i", &T);

    for(i=0;i<T;i++){
        scanf("%i %i", &populacaoA, &populacaoB);
        scanf("%f %f", &crescimentoPopulacionaA, &crescimentoPopulacionaB);

        while(populacaoA<=populacaoB){
            populacaoA  += populacaoA * crescimentoPopulacionaA/100;
            populacaoB  += populacaoB * crescimentoPopulacionaB/100;
            contadorAnos++;
            if(contadorAnos > 100){
                break;
            }
        }
        if(contadorAnos > 100){
            printf("Mais de 1 seculo.\n");
        }else {
            printf("%i anos.\n", contadorAnos);
        }
        contadorAnos=0;
    }

    return 0;
}
