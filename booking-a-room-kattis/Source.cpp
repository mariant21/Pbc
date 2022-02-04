//https://open.kattis.com/problems/bookingaroom
#include <iostream>
using namespace std;
int frecventa[101];

int main() {
    int r, n, b;
    bool ocupat = false;
    cin >> r >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        frecventa[b]++;
    }
    for (int j = 1;j <= r;j++) {
        if (frecventa[j] == 0) {
            cout << j;
            ocupat = true;
            break;
        }
    }
    if (ocupat == false)
        cout << "too late";

    return 0;
}