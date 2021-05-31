#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = arr[i] - arr[i + 1];
        if (diff >= 0)
        {
            count += diff;
            arr[i + 1] += diff;
        }
    }

    cout << count;

    return 0;
}