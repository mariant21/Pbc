//https://open.kattis.com/problems/ants
#include <iostream>
#include <algorithm>
using namespace std;
int fur[100000000];
int main() {
	int v, l, f, n, t, t_l, t_s;
	cin >> v;
	t = 0;
	for (int i = 1; i <= v;i++) {
		cin >> l >> n;
		for (int j = 1;j <= n;j++) {
			cin >> fur[j];
		}
		sort(fur + 1, fur + n + 1);

		t_l = 0;									//pentru timpul cel mai lung...
		if (l - fur[1] > fur[n])
			t_l = l - fur[1];
		else
			t_l = fur[n];

		t_s = 0;
		for (int k = 1;k <= n;k++) {							//pentru timpul cel mai scurt...
			t = min(l - fur[k], fur[k]);
			if (t > t_s)
				t_s = t;
		}

		cout << t_s << " " << t_l << "  \n";
	}
	return 0;
}
