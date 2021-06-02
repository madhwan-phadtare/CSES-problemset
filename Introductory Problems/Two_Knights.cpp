#include<iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n<=1)
        cout<<"0"<<endl;
    else    
    {
        for(long long i=1; i<=n; i++)
        {
            long long sq = i*i;
            long long val = (sq*(sq-1))/2;
            cout<<val<<endl;
        }
    }

}