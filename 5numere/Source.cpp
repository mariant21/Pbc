#include <iostream>
using namespace std;

int main() {

	int a, b, c, d, e, sum, max1, max2, max3;
	cin >> a >> b >> c >> d;

	if (a > b && a > c && a > d && a > e)
		max1 = a;
	else if (b > a && b > c && b > d && b > e)
		max1 = b;
	else if (c > a && c > b && c > d && c > e)
		max1 = c;
	else if (d > a && d > b && d > c && d > e)
		max1 = d;
	else
		max1 = a;

	cout << max1;


	return 0;
}