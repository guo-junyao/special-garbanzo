#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 0.0;
    int p = 1, q = 2;

    for (int i = 1; i <= n; i++) {
        sum += (float)p / q;
        int next_p = q;
        int next_q = p + q;
        p = next_p;
        q = next_q;
    }

    printf("%.4f\n", sum);

    return 0;
}