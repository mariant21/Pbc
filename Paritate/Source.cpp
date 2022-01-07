//https://www.pbinfo.ro/probleme/109/paritate
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0) 
		cout << n << " este par";
	
	else 
		cout << n << " este impar";
	
	return 0;
}