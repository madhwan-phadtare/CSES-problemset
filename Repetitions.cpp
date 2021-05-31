#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 1;
    int max_count = 1;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
            count++;
        else 
            count = 1;
        max_count = max(max_count, count);
    }
    cout<<max_count;
}