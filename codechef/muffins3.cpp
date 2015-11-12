/*
	Author   :  Sandeep Ravindra
	Contest  :  Practice
	Problem  :  Packaging Cupcakes (MUFFINS3)
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

#define     s(n)		    scanf("%d",&n)
#define     ss(n)		    scanf("%s",n)
#define     sc(n)		    scanf("%c",&n)
#define     sll(n)		    scanf("%lld",&n)
#define     fall(i,a,b)	    for(int i=a;i<b;i++)
#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))
#define	    ll		        long long
#define	    p(n)		    printf("%d",n)
#define	    pll(n)		    printf("%lld",n)
#define	    pbl()		    printf("\n")

int main()
{
    int t;
    s(t);
    while(t--)
    {
        ll n;
        sll(n);
        p(n/2 + 1);pbl();
    }
return 0;
}
