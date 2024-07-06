#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int fences[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &fences[i]);
    }

    int segments = 1; // Inicialmente há pelo menos um segmento
    for (int i = 1; i < n; i++) {
        if (fences[i] != fences[i-1]) {
            segments++;
        }
    }

    printf("%d\n", segments);
    return 0;
}
