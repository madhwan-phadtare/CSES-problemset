#include<bits/stdc++.h>

using namespace std;

int main()
{
    int check = 0;
    vector<int> res;
    vector<int> rev;
    char ch = '@';
    string s;
    cin >> s;
    unordered_map<int, int> hash;
    for(auto ele : s)
    {
        hash[ele]++;
    }
    for(auto ele : hash)
    {
        if(ele.second%2!=0)
            check++;
    }
    if(check>1)
        cout<<"NO SOLUTION"<<endl;
    else
    {
        for(auto ele : hash)
        {
            while(ele.second>1)
            {
                ele.second -= 2;
                res.push_back(ele.first);
                rev.push_back(ele.first);
            }
            if(ele.second==1)
                ch = ele.first;
        } 
        if(ch!='@')
            res.push_back(ch);

        reverse(rev.begin(), rev.end());

        res.insert(res.end(), rev.begin(), rev.end());

        for(auto ele : res)
            cout<<(char)ele;

    }
}