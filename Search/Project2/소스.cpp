#include <iostream>
#include <math.h>
using namespace std;

int change(int n, int m) {
	static int coin[200][200];
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (i == 0) {
				coin[i][j] = 1;
			}
			if (j == 0) {
				coin[i][j] = 0;
			}
			if (i < j) {
				m = n;
			}
			if (i > j){
				for (int p = 1; p <= j; p++) {
					coin[i][j] += coin[i-p][p];
				}
			}
		}
	}
	return coin[n][m];
}

int main() {
	std::cout << "경우의 수는 " << change(2, 3);
}
