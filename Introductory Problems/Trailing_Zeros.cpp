#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int f = 5;
    int sum = 0;

    while((n/f)>0)
    {
        sum += n/f;
        f = f*5;
    }

    cout<<sum;

    return 0;
}