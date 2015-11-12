/*
    Author:     Sandeep Ravindra
    Contest:    Code Smart 2014
    Problem:    The Chef and the Field (CHFFIELD)
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
    int t,f1,f2;
    ll l,b;
    for(s(t);t--;)
    {
        f1=f2=0;
        sll(l);sll(b);
        if(l==2 || l==3 || l==1)
            l=1;
        if(b==2 || b==3 || b==1)
            b=1;
        if(l!=1 || b!=1)
        {
            if(l%2!=0 && l!=1)
            {
                for(ll k=2;k<=sqrt(l);k++)
                {
                    if(l%k==0)
                    {
                        f1=1;
                        break;
                    }
                }
            if(f1==0)
                l-=1;
            }
            if(b%2!=0 && b!=1)
            {
                for(ll k=2;k<=sqrt(b);k++)
                {
                    if(b%k==0)
                    {
                        f2=1;
                        break;
                    }
                }
            if(f2==0)
                b-=1;
            }
        }
        pll(l*b);pbl();
    }
return 0;
}
