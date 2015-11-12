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
	int t,i;
	s(t);
	while(t--)
    {
        int b,ls;
        s(b);s(ls);
        double rs;
        printf("%f ",sqrt(ls*ls - b*b));
        printf("%f\n",sqrt(ls*ls + b*b));
    }
    return 0;
}
