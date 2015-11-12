#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<iomanip>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		    ((a)>(b)?(a):(b))
#define     min(a,b)		    ((a)<(b)?(a):(b))
#define	    ll			        long long

int main()
{
    ll t;
    sll(t);
    ll x,k;
    while(t--)
    {
        ll j=0;
        sll(x);sll(k);
        double ans=0;
        ll a=1;
        while(a<=k)
            a<<=1;
        a>>=1;
        j=k%a;
      	ans=((double)((2*j)+1)*x)/(double)(a*2);
        cout<<fixed<<setprecision(16)<<ans<<"\n";
    }
return 0;
}
