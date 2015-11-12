#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<limits.h>
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
    int t,n;
    s(t);
    while(t--)
    {
        s(n);
        ll a[n];
        fall(i,0,n)
        {
            sll(a[i]);
        }
        sort(a,a+n);
        ll diff=LONG_MAX;
        fall(i,0,n-1)
        {
            if(a[i+1]-a[i] < diff)
                diff=a[i+1]-a[i];
        }
        printf("%lld\n",diff);
    }
    return 0;
}
