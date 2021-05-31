#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1)
        cout<<"1";
    else if(n<=3)
        cout<<"NO SOLUTION";
    else{
        for(int i=1; i*2<=n; i++)
        {
            cout<<i+n/2<<" ";
            cout<<i<<" ";
        }
        if(n%2!=0)
            cout<<n;
    }
}