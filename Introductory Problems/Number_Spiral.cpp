#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n, m;
    while (t--)
    {
        cin >> n >> m;
        if (n == m)
            cout << (n * n) - n + 1 << endl;
        else if (n > m)
        {
            long long x = (n * n) - n + 1;
            if (n % 2 == 0)
                x += n - m;
            else
                x += m - n;
            cout << x << endl;
        }
        else
        {
            long long x = (m * m) - m + 1;
            if (m % 2 == 0)
                x += n - m;
            else
                x += m - n;
            cout << x << endl;
        }
    }
    return 0;
}