
#include <stdio.h>

unsigned long long fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci number at position %d = %llu\n", n, fibonacci(n));
    }

    return 0;
}
