//https://open.kattis.com/problems/sodaslurper
#include <iostream>
using namespace std;

int main() {
	int e, f, c, s, d,n, d1;
	cin >> e >> f >> c;
	s = e + f;
	c = c - 1;
	s = s - 1;
	s = s / c;
	cout << s;
	return 0;
}