#include <iostream>
using namespace std;

int main() {
	int a, b;
	int max = 0;
	cin >> a >> b;
	if (a >= b) {
		max = a;
	}
	else {
		max = b;
	}
	cout << max << endl;
	return 0;
}