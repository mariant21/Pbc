#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n)
	{
		if (n == 1)
			cout << "1 \n";
		else if (n>=2)
		n = 2 * n - 2;
		cout << n << "\n";
	}


	return 0;
}