//https://open.kattis.com/problems/planina
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 == 0 || n == 1)
	{
		n = pow(2, n) + 1;
		n = n * n;
	}

	else if (n % 2 != 0) {
		n = pow(2, n-1);
		n = n + n + 1;
		n = n * n;

	}
	cout << n;
	return 0;
}