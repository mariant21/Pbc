#include <iostream>
using namespace std;

int main() {
	int a, b, c, mm, max, min;
                   	cin >> a >> b >> c;
	min = a, max = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (b > max)
		max = b;
	if (c > max)
		max = c;

		mm = max - min;
	    cout << mm;
		

    return 0;
}