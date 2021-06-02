#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long m = 1e9 + 7;

    long long p = 1;
    
    while (n--)
        p = (p * 2) % m;

    cout << p;

    return 0;
}