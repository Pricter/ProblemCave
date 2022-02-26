#include <stdio.h>

int is_prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int sum;
    for(int i = 2; i < 100000; i++) {
        if(is_prime(i)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}