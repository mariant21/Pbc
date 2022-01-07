//https://www.pbinfo.ro/probleme/2938/albina
#include <iostream>
using namespace std;
int main()
{
    long long n, c;
    cin >> n;
    c = 0;
    c = n * (n - 1) * 3 + 1;

    cout << c;

    return 0;
}