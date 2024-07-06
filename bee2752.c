#include <stdio.h>

int main() {
    char caracter[50] = "AMO FAZER EXERCICIO NO URI";


    printf("<%s>\n", caracter);
    printf("<%30s>\n", caracter);
    printf("<%.20s>\n", caracter);
    printf("<%-20s>\n", caracter);
    printf("<%-30s>\n", caracter);
    printf("<%.30s>\n", caracter);
    printf("<%30.20s>\n", caracter);
    printf("<%-30.20s>\n", caracter);
    return 0;
}
