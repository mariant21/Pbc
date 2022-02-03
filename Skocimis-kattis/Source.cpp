https://open.kattis.com/problems/skocimis
#include <iostream>
using namespace std;

int main() {
	int a,b,c,s,d,n;
	cin >> a >> b >> c;
	s = b - a;
	d = c - b;
	if (s > d)
		n = s - 1;
	else
		n = d - 1;
	cout << n;
	
	return 0;
}