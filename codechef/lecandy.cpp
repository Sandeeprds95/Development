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
#define     max(a,b)		    ((a)>(b)?(a):(b))
#define     min(a,b)		    ((a)<(b)?(a):(b))
#define	    ll			        long long

int main()
{
	int t,n;
	ll c;
	s(t);
	while(t--)
    {
        s(n);sll(c);
        ll sum=0,k;
        fall(i,0,n)
        {
            sll(k);
            sum+=k;
        }
        if(sum<=c)
            printf("Yes\n");
        else
            printf("No\n");
    }
return 0;
}
