//https://open.kattis.com/problems/speedlimit
#include <iostream>
using namespace std;

int main() {
	int n, s, t, t1, d;
	cin >> n;
	while (n != -1){
		t1 = 0;
		d = 0;
			for (int i = 1; i <= n; i++) {
				cin >> s >> t ;
				t1 = t - t1;
				d = d + s * t1;
				t1 = t;
			}
			
		cout << d << " miles" << endl;
		cin >> n;
	} 
	return 0;
}