#include <stdio.h>

int main() {
    int longest = 1;
    long long longestNum = 1;
    long long highest = 1;
    long long highestNum = 1;
    for(long long i = 1; i < 10000000; i++) {
        long long num = i;
        int count = 0;
        while(num != 1) {
            count++;
            if(num % 2 == 0) num /= 2;
            else num = (num * 3) + 1;
            if(num > highestNum) {
                highestNum = num;
                highest = i;
            }
        }
        if(count > longest) {
            longest = count;
            longestNum = i;
        }
    }
    printf("Longest cycle is %d, Number: %lld\n", longest, longestNum);
    printf("Highest peak is %lld, Number: %lld\n", highestNum, highest);
}