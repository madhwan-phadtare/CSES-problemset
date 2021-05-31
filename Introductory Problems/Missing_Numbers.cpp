#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = 0;
    }

    int x;
    for(int i=0; i<n-1; i++)
    {
        cin >> x;
        arr[x-1] = 1;
    }

    for(int i=0; i<n; i++)
        if(arr[i]==0)
        {
            cout<<i+1;
        }

}