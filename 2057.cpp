#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double e = 1.0;
    double f = 1.0;

    for (int i = 1; i <= n; i++) {
        f *= i;
        e += 1.0 / f;
    }

    printf("%.nf\n", e);

    return 0;
}