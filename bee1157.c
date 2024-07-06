#include <stdio.h>

int main() {
    int i, num;

    scanf("%i", &num);

    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%i\n", i);
        }
    }

    return 0;
}
