#include <stdio.h>

int main() {
    int v[5];
    int totalMandiocas=225, i, mandiocasGramas;

    for(i=0;i<5;i++){
        switch(i){
            case 0:
                scanf("%i", &v[i]);
                mandiocasGramas = v[i] * 300;
                totalMandiocas+=mandiocasGramas;
                break;
            case 1:
                scanf("%i", &v[i]);
                mandiocasGramas = v[i] * 1500;
                totalMandiocas+=mandiocasGramas;
                break;
            case 2:
                scanf("%i", &v[i]);
                mandiocasGramas = v[i] * 600;
                totalMandiocas+=mandiocasGramas;
                break;
            case 3:
                scanf("%i", &v[i]);
                mandiocasGramas = v[i] * 1000;
                totalMandiocas+=mandiocasGramas;
                break;
            case 4:
                scanf("%i", &v[i]);
                mandiocasGramas = v[i] * 150;
                totalMandiocas+=mandiocasGramas;
                break;
            default:
                break;
        }
    }
    printf("%i\n", totalMandiocas);


    return 0;
}
