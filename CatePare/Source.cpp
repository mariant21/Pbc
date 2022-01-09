#include <iostream>
using namespace std;

int main() {
	int n,k;
    cin >> n;
	k = 0;
	while (n!=0)
	{
		if (n % 2 == 0)
			k++;
		cin >> n;
	}

	if (k == 0)
		cout << "nu exista";
	else
		cout << k ;

    return 0;
}