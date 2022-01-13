#include <iostream>
using namespace std;

int main()
{
    int k, q, r, b, kn, p, c;
    cin >> k >> q >> r >> b >> kn >> p;
    c = 1;

    //for 1 king
    if (k == 1)
        k = k - 1;
    else if (k == 0) {
        k = k + 1;
    }
    else if (k > 1) {
        k = c - k;
    }
    //for 1 queen
    if (q == 1)
        q = q - 1;
    else if (q == 0) {
        q = q + 1;
    }
    else if (q > 1) {
        q = c - q;
    }
    //for 2 rooks
    c = 2;
    if (r == 2)
        r = r - 2;
    else if (r == 0) {
        r = r + 2;
    }
    else if (r > 2) {
        r = c - r;

    }
    //for 2 bishops
    c = 2;
    if (b == 2)
        b = b - 2;
    else if (b == 0) {
        b = b + 2;
    }
    else if (b > 2) {
        b = c - b;

    }
    //for 2 knights
    c = 2;
    if (kn == 2)
        kn = kn - 2;
    else if (kn == 0) {
        kn = kn + 2;
    }
    else if (kn > 2) {
        kn = c - kn;

    }
    //for 8 pawns
    c = 8;
    if (p < 8)
        p = c - p;
    else if (p == 0) {
        p = p + c;
    }
    else if (p >= 8) {
        p = c - p;

    }
    cout << k << " " << q << " " << r << " " << b << " " << kn << " " << p << " ";





}

