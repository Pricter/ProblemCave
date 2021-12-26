#include <iostream>

int main() {
	int currentNum = 1;
	int previousNum = 1;
	int limit = 4000000;
	int ans = 0;

	for (int i = 0; i < limit; i++) {
		int temp = currentNum;
		currentNum += previousNum;
		previousNum = temp;
		if (currentNum > limit) {
			break;
		}
		ans += currentNum;
	}
	printf("Ans: %d", ans);
}