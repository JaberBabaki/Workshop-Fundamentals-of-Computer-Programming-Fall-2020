//
// Created by jaberALU on ۲۱/۱۲/۲۰۲۰.
//
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    bool state = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            state = false;
            break;
        }
    }
    return state;
}

bool isSuperPrime(int n) {
    int split, m = 10;
    bool state = true;

    while (split != n) {
        split = n % m;
        printf("h1\n");
        state = isPrime(split);
        if (!state) {
            break;
        }
        m = m * 10;
    }
    return state;
}

int main() {
    int n;
    bool state = true;

    scanf("%d", &n);

    state=isSuperPrime(n);

    if (state) {
        printf("superPrime");
    } else {
        printf("NotsuperPrime");
    }

    return 0;
}
