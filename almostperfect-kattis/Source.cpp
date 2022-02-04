//https://open.kattis.com/problems/almostperfect
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int p, di;

	while (cin >> p) {
		di = 1;
		for (int d = 2; d <= sqrt(p); d++) { //verificam care sunt divizorii
			if (p % d == 0)
				if (p/d==d)
				di = di + d + p / d -d;
				else
				di = di + d + p / d;
		}
		if (p == di)						//verificam in care categorie se incadreaza
			cout << di << " perfect\n";
		else if (di >= p - 2 && di <= p + 2) {
			cout << p << " almost perfect\n";
		}
		else
			cout << p << " not perfect\n";
	}
	return 0;
}
