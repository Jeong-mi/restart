#include <iostream>
using namespace std;
#define MAX 200

int change(int n, int m) {
	static int coin[MAX][MAX];
	int cnt = 0;

	if (n == 0) {
		return coin[n][m] = 1;
	}
	if (m == 0) {
		return coin[n][m] = 0;
	}
	if (coin[n][m] != 0) {
		return coin[n][m];
	}

	if (n < m) {
		m = n;
		if (coin[n][m] != 0) {
			return coin[n][m];
		}
	}

	for (int i = 1; i <= m; i++) {
		cnt += change(n - i, i);
	}

	return coin[n][m] = cnt;

}

int main() {
	std::cout << "경우의 수는 " << change(4, 3);
}
