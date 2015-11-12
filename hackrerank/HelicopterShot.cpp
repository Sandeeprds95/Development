#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,k,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>30)
            cout<<"6"<<endl;
        else if(n>24)
            cout<<"5"<<endl;
        else if(n>18)
            cout<<"4"<<endl;
        else if(n>12)
            cout<<"3"<<endl;
        else if(n>6)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}

