#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = (n*(n+1))/2;
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
        vector<int> left;
        vector<int> right;
        long long lsum = 0;
        long long rsum = 0;

        for(int i=n ; i>0; i--)
        {
            if(lsum<rsum)
            {
                left.push_back(i);
                lsum += i;
            }
            else
            {
                right.push_back(i);
                rsum += i;
            }
        }

        cout<<left.size()<<endl;
        for(auto ele : left)
            cout<<ele<<" ";
        cout<<endl;

        cout<<right.size()<<endl;
        for(auto ele : right)
            cout<<ele<<" ";
        cout<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}