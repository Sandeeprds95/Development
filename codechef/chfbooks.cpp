#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		((a)>(b)?(a):(b))
#define     min(a,b)		((a)<(b)?(a):(b))
#define	    ll			long long

int main()
{
	int t;
	s(t);
	while(t--)
    {
        int n,m;
        s(n); s(m);
        ll a[n],sum=0,sum2=0;
        fall(i,0,n)
            sll(a[i]);
        sort(a,a+n);
        fall(i,0,n)
        {
            if(i<m)
                sum+=a[i];
            else
                sum2+=a[i];
        }
        printf("%lld\n",sum2-sum);
    }
return 0;
}
