#include <stdio.h>

int main() {
    int colocacap;

    scanf("%i", &colocacap);
    if(colocacap == 1){
        printf("Top 1");
    }else if (colocacap > 1 && colocacap <= 3){
        printf("Top 3");
    }else if (colocacap > 3 && colocacap <=5){
        printf("Top 5");
    }else if(colocacap > 5 && colocacap <= 10){
        printf("Top 10\n");
    }else if (colocacap > 10 && colocacap<=25){
        printf("Top 25\n");
    }else if (colocacap > 25 && colocacap <=50){
        printf("Top 50\n");
    }else if (colocacap > 50 && colocacap <=100){
        printf("Top 100\n");
    }
    return 0;
}
