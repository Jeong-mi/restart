# include <stdio.h>
#include <math.h>
#include <iostream>

int arr[10] = { 5, 7, 8, 9, 10, 11, 13 };

int search(int n, int x) {
	int location, low, high, mid;

	low = 0;	high = n;
	while (low <= high) {
		mid = floor((low + high) / 2);
		if (x == arr[mid])
			return mid;
		else if (x < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;

}

int main() {
	int arr[7] = { 5, 7, 8, 10, 11, 13 };

	int index = search(6, 12);
	std::cout << index+1;
}