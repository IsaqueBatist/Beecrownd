#include <stdio.h>

int main() {
    int produtosComprados, quantidadeComprada, codValor, i;
    float totalCompra=0, compra;

    scanf("%i", &produtosComprados);

    for(i=0;i<produtosComprados;i++){
        scanf("%i %i", &codValor, &quantidadeComprada);
        switch(codValor){
        case 1001:
            compra = quantidadeComprada*1.50;
            totalCompra += compra;
            break;
        case 1002:
            compra = quantidadeComprada*2.50;
            totalCompra += compra;
            break;
        case 1003:
            compra = quantidadeComprada*3.50;
            totalCompra += compra;
            break;
        case 1004:
            compra = quantidadeComprada*4.50;
            totalCompra += compra;
            break;
        case 1005:
            compra = quantidadeComprada*5.50;
            totalCompra += compra;
            break;
        default:
            break;
        }

    }
    printf("%.2f", totalCompra);
    return 0;
}
