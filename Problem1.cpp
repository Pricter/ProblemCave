#include <iostream>

int main() {
	int limit = 1001;
	int ans = 0;
	for (int i = 0; i < limit; ++i) {
		if (((i % 3) == 0) && ((i % 5) == 0)) {
			ans += i;
			continue;
		}
		else if ((i % 3) == 0) {
			ans += i;
			continue;
		}
		else if ((i % 5) == 0) {
			ans += i;
			continue;
		}
	}
	printf("Ans: %d", ans);
}