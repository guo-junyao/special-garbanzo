#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = 1;
    a %= 1000;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % 1000;
        }
        a = (a * a) % 1000;
        b /= 2;
    }
    if (result == 0) {
        printf("000");
    } else if (result < 10) {
        printf("%d", result);
    } else if (result < 100) {
        printf("%d", result);
    } else {
        printf("%d", result);
    }
    return 0;
}