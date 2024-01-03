#include <stdio.h>

double power(double m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return m * power(m, n - 1);
    }
}

int main() {
    double m = 5.0;
    int n = 4;

    printf("%.0f^%d = %.0f\n", m, n, power(m, n));

    return 0;
}

