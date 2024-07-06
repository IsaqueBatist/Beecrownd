#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0;
        int count = 0;

        if (X % 2 == 0) {
            X++;
        }
        while (count < Y) {
            sum += X;
            X += 2;
            count++;
        }

        printf("%d\n", sum);
    }

    return 0;
}
