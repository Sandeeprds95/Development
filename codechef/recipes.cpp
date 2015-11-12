/*
	Author   :  Sandeep Ravindra
	Contest  :  Practice
	Problem  :  Cutting Recipes (recipes)
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
#define	    p(n)		    printf("%d ",n)
#define	    pll(n)		    printf("%lld",n)
#define	    pbl(n)		    printf("\n")

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t; s(t);
    while(t--)
    {
        int n,temp,k; s(n);
        int a[n];
        fall(i,0,n)
            s(a[i]);
        temp=a[0];
        fall(i,1,n)
            temp=gcd(temp,a[i]);
        fall(i,0,n)
            p(a[i]/temp);
        pbl();
    }
return 0;
}
