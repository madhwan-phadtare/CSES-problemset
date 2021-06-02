#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if((a+b)%3!=0)
            cout<<"NO"<<endl;
        else if(max(a,b)/2>min(a,b))
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}