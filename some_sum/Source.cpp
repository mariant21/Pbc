#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	if (n % 2 != 0 || n == 1)
		cout << "Either";
	else if (n % 4 == 0)
		cout << "Even"; 
	else 
		cout <<  "Odd";
	return 0;
}
