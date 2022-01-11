#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string CapVal = "__0_0__", MijVal = "_0___0_", SfVal = "0_____0";
	if (n > 0) {
		for (int j = 1; j <= m; j++)
			cout << CapVal << "_";
		for (int i = 2; i <= n - 1; i++) {
			cout << endl;
			for (int j = 1; j <= m; j++) {
				cout << MijVal << "_";
			}
		}
		cout << endl;
		if(n>1)
		for (int j = 1; j <= m; j++)
			cout << SfVal << "_";
	}



	return 0;
}