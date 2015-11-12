/*
        Program to display if a number is a fibonacci number, n<= 10^10
1. N is a fibonacci number if, 5* N^2 ± 4 is perfect square.

2. Easiest way to check if a number is a perfect square, if(sqrt(n)%1==0).
*/
#include <map>
#include <iostream>
using namespace std;

int main()
{
    long long n,a=0,b=1,c;
    map<int,int> m;
    while(1)
    {
        c=a+b;
        if(c>10000000000)
            break;
        m[c]=1;
        a=b;
        b=c;
    }
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(m[n]==1)
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
    return 0;
}

