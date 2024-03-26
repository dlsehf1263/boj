#include <iostream>

bool isPrime(int n) {
    if (n == 1) return false;

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int numbCount;
    scanf("%d", &numbCount);

    int primeCount = 0, numb;

    for (int i = 0; i < numbCount; ++i) {
        scanf("%d", &numb);
        primeCount += isPrime(numb);
    }

    printf("%d", primeCount);

    return 0;
}