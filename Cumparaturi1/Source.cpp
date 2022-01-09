#include <iostream>
using namespace std;

int main() {
	int s, c, n;
	cin >> s >> c >> n;
	if (s > 0) {
		if (s % c == 0 && s % n == 0   ) {
			cout << "CN";
		}
		else if (s % c == 0 && s % n != 0) {
			cout << "C";
		}
		if (s % n == 0 && s % c !=0) {
			cout << "N";
		}
		else if (s % c != 0 && s % n != 0 && c==0 && n==0 ) {
			cout << "nimic";
		}
	}
	return 0;
}