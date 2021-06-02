#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int zero = 0, five = 0, two = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while(temp%10==0 && temp>0)
        {
            temp = temp/10;
            zero++;
        }
        while(temp%5==0 && temp>0)
        {
            temp = temp/5;
            five++;
        }
    }

    cout << zero + five;

    return 0;
}