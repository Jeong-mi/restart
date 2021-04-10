#include <iostream>
#include <math.h>

int arr[6] = { 5, 7, 8, 10, 11, 13 };

int ternary(int x) {
	int low = 0, high = 6;
	int location = -1;

	while (low <= high) {
		int p = floor((high - low) / 3);
		int q = floor((2 * (high - low)) / 3);

		if (x < arr[p])
			high = p;
		else if (arr[q] < x)
			low = q + 1;
		else {
			low = p + 1;
			high = q;
		}

		if (x == arr[p])
			location = p;
		if (x == arr[q])
			location = q;

	}

	return location;

}

int main() {
	int arr[6] = { 5, 7, 8, 10, 11, 13 };

	std::cout << "¾È³ç";
	std::cout << "ÀÎµ¦½º À§Ä¡´Â" << (ternary(7) + 1);
}
