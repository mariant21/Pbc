#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m, x,k,uc, n1;
	cin >> n;
    m = 0;
	k = 0;
	n1 = n;
	while (n != 0) {
		x = n % 10;
		n = n / 10;
		m = m * 10 + x;		
	}
	uc = n1 % 10;
	while (uc == 0) {
		uc = n1 % 10;
		n1 = n1 / 10;
		if (uc == 0)
			k++;
	}
	while (m != 0) {
		x = m % 10;
		m = m / 10;
	cout << x  << " " ;
	}
	for (int i = 1; i <= k;i++)
		cout << 0 << " ";
	return 0;
}