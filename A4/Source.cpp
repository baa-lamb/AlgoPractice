#include <iostream>
using namespace std;

int main() {
	int w = 0;
	cin >> w;
	if (w == 2) {
		cout << "NO";
		return 0;
	}
	for (int i = 2; i < w; i+=2) {
		if ((w - i) % 2 == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	

	return 0;
}