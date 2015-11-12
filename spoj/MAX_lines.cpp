#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

#define     s(n)            scanf("%d",&n)
#define     fall(i,b)       for(int i=0;i<b;i++)

int main()
{
    int t;
    unsigned long long r,k;
    s(t);
    fall(i,t)
    {
        scanf("%lld",&r);
        k=4*r*r;
        cout<<fixed<<setprecision(2)<<"Case "<<i+1<<": "<<k<<".25"<<endl;
    }
    return 0;
}
