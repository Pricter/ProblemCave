#include <iostream>
#include <vector>

int main() {
	unsigned int prime = 600851475143;


	for (int i = 0; i < prime; i++) {
		if (i == 0)
			continue;
		if ((prime % i) == 0) {
			std::cout << "Divisible by: " << i << "\n";
		}
	}
}