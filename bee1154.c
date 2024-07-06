#include <stdio.h>

int main() {
    float media, idade, somaIdades=0, contador=0;

    do{

        scanf("%f", &idade);
        if(idade < 0){
            break;
        }
        somaIdades+=idade;
        contador++;

    }while(idade>0);
    media = somaIdades/contador;
    printf("%.2f\n", media);
    return 0;
}
