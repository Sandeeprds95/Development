#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int >v;
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it);
    return 0;
}
