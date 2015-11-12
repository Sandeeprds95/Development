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
        ll n,k,sum=0;
        sll(n);sll(k);
        sum=((n*(n-1)*(n-2))/6) - (k*(k-1)*(k-2))/6;
        printf("%lld\n",sum);
    }
return 0;
}
