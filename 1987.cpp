#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double r1, r2;
    cin >> r1 >> r2;

    double R = 1.0 / (1.0 / r1 + 1.0 / r2);

    cout << fixed << setprecision(2) << R << endl;

    return 0;
}