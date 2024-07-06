#include <stdio.h>

int main() {
    int Media, nota1, nota2;

    scanf("%i", &nota1);
    scanf("%i", &Media);

    nota2 = Media*2-nota1;
    printf("%i\n", nota2);
    return 0;
}
