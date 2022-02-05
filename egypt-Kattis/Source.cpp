//https://open.kattis.com/problems/egypt
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, m, s;
	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0)
			break;
		m = max(a, (max(b, c)));						//verificam daca nu cumva A sau B sunt mai mari decat C
		
		if (a == m)
			swap(a, c);									//schimbam valorile intre ele
		else if (b == m)
			swap(b, c);

		s = pow(a, 2) + pow(b, 2);
		c = pow(c, 2);
		if (s == c)										//verificam t.pitagora a^2+b^2=c^
			cout << "right\n";
		else
			cout << "wrong\n";

	}

	return 0;
}