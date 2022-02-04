//https://open.kattis.com/problems/busnumbers
#include <iostream>
using namespace std;

int bus[1001];

int main() {
	int n, aux;
	cin >> n;
	for (int i = 1;i <= n;i++)
		cin >> bus[i];
	for (int i = 1;i <= n - 1;i++)
	{
		for (int j = i + 1;j <= n;j++)
		{
			if (bus[i] > bus[j])
			{
				aux = bus[i];
				bus[i] = bus[j];
				bus[j] = aux;
			}
		}
	}
	for (int i = 1;i <= n;i++) {
		if (bus[i + 1] - bus[i] == 1 && bus[i + 2] - bus[i + 1] == 1) {
			cout << bus[i] << "-";
			while (bus[i + 1] - bus[i] == 1)
				i++;
			cout << bus[i] << " ";
		}
		else
			cout << bus[i] << " ";
	}
	return 0;
}