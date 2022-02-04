//https://open.kattis.com/problems/aprizenoonecanwin
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int pret[100001];

int main() {
	int it, c, aux, o;
	cin >> it >> c;
	o = 0;
	for (int i = 1;i <= it;i++)
		cin >> pret[i];

	sort(pret + 1, pret + it + 1);

	for (int i = 1; i <= it;i++) {
		if (pret[i] + pret[i - 1] <= c)
			o++;
	}
	if (o > 0)
		cout << o;
	else cout << 1;
	return 0;
}