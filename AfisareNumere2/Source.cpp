//https://www.pbinfo.ro/probleme/3231/afisarenumere2
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {

		cout << i << " ";

	}
	cout << endl;
	for (int i = n; i >= 1; i--) {

		cout << i << " ";
	}


	return 0;
}