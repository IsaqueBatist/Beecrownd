#include <stdio.h>

int main() {
    double valorEXP, novoEXP, aumentoEXP;


    while(aumentoEXP!=0 && aumentoEXP!=0){
        scanf("%lf %lf", &aumentoEXP, &valorEXP);
        if(aumentoEXP==0 && aumentoEXP==0){
            break;
        }
        novoEXP = aumentoEXP * valorEXP;
        printf("%.0lf\n", novoEXP);

    }
    return 0;
}
