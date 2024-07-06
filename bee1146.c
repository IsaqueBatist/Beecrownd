    #include <stdio.h>

    int main() {
        int i, valorInput;

        do{
            scanf("%i", &valorInput);
            for(i=1;i<=valorInput;i++){
                if(i == valorInput){
                    printf("%i\n", i);
                }else {
                    printf("%i ", i);
                }
            }
        }while(valorInput!=0);


        return 0;
    }
