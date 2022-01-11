#include <iostream>
using namespace std;

int main() {
	int n, m, x,y;
	cin >> n;
    m = 0;
	while (n != 0) {
		x = n % 10;
		n = n / 10;
		m = m * 10 + x;	
	}
	while (m != 0) {
		x = m % 10;
		m = m / 10;
	cout << x << " ";
	}
	return 0;
}