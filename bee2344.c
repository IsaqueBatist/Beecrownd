#include <stdio.h>

int main() {
    int nota;
    char conceito;

    scanf("%i", &nota);

    if(nota==0){
        conceito = 'E';
    }else if (nota >= 1 && nota <=35){
        conceito = 'D';
    }else if (nota>35 && nota<=60){
        conceito = 'C';
    }else if (nota>60 && nota<=85){
        conceito = 'B';
    }else {
        conceito = 'A';
    }

    printf("%c", conceito);

    return 0;
}
