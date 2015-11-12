//Chef and Remissness - COOK43
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
    ll a,b;
    s(t);
    while(t--)
    {
        sll(a);sll(b);
        a>b?printf("%lld ",a):printf("%lld ",b);
        printf("%lld\n",a+b);
    }
    return 0;
}
