#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int n, i, k;

    // 1
    P = 0;
    n = 1;
    while (n <= 10) {
        S = 1;
        k = 1;
        while (k <= n) {
            S *= (1.0 * k) / n; 
            k++;
        }
        P += (1 + S) / (n * n);  
        n++;
    }
    cout << "Result with while: " << P << endl;

    // 2
    P = 0;
    n = 1;
    do {
        S = 1;
        k = 1;
        do {
            S *= (1.0 * k) / n;
            k++;
        } while (k <= n);
        P += (1 + S) / (n * n);
        n++;
    } while (n <= 10);
    cout << "Result with do...while: " << P << endl;

    // 3
    P = 0;
    for (n = 1; n <= 10; n++) {
        S = 1;
        for (k = 1; k <= n; k++) {
            S *= (1.0 * k) / n;
        }
        P += (1 + S) / (n * n);
    }
    cout << "Result with for (increasing): " << P << endl;

    // 4
    P = 0;
    for (n = 10; n >= 1; n--) {
        S = 1;
        for (k = n; k >= 1; k--) {
            S *= (1.0 * k) / n;
        }
        P += (1 + S) / (n * n);
    }
    cout << "Result with for (decreasing): " << P << endl;

    return 0;
}
