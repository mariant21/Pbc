//https://open.kattis.com/problems/trollhunt
#include <iostream>
using namespace std;

int main() {
	int b, k, g, d, nrG;
	cin >> b >> k >> g;
	d = 0;
	nrG = k / g;
	b--;
	if (b % nrG == 0)
		 d = b / nrG;
	else
		d = (b / nrG) + 1;
	
	cout << d;
	return 0;
}