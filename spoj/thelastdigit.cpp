#include<iostream>
using namespace std;

int calc(int a,long long b)
{
    long long result=1;
    while(b)
    {
        if(b%2)
            result=(result*a)%10;
        b>>=1;
        a=(a*a)%10;
    }
    return result;
}

int main()
{
    int t,a;
    long long b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<calc(a,b)<<endl;
    }
    return 0;
}
