#include <stdio.h>

int main() {
    int i, j, k, n, m, count = 0, prime = 0;
    for (i = 2; i < 10001; i++) {
        prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 1) {
            count++;
            printf("%d\n", i);
        }
    }
    return 0;
}