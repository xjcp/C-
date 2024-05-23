#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int maxNum;
	if (a >= b && a >= c) {
		maxNum = a;
	}
	else if (b >= a && b >= c) {
		maxNum = b;
	}
	else if (c >= b && c >= a) {
		maxNum = c;
	}

	if (a == b && a == c) {
		cout << 10000 + (maxNum * 1000);
	}
	else if (a == b && a != c) {
		cout << 1000 + (a * 100);
	}
	else if (b == c && b != a) {
		cout << 1000 + (b * 100);
	}
	else if (c == a && c != b) {
		cout << 1000 + (c * 100);
	}
	else {
		cout << 100 * maxNum;
	}
}
