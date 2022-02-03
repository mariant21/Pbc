//https://open.kattis.com/problems/different
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	long long a, b, d = 0;
	while (cin >> a >> b) {
		d = a - b;
		cout << llabs(d) << "\n";
	}
	return 0;
}