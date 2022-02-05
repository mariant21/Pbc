//https://open.kattis.com/problems/plantingtrees
#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int n, p, tree[100000];
	cin >> n;
	p = 0;
	for (int i = 1; i <= n; i++)
		cin >> tree[i];
	sort(tree + 1, tree + n + 1, desc);
	for (int i = 1; i <= n;i++) {
		if (p < (tree[i] + i + 1))
			p = tree[i] + i + 1;
	}
	cout << p;
			return 0;
	}