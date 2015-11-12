/*
	Author     :  Sandeep Ravindra
	Contest    :  Practice
	Problem    :  Lucky lucky number (CHEFLUCK)
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
#define	    pbl(n)		    printf("\n")

int main()
{
    int t,flag;
    ll n,r;
    for(s(t);t--;)
    {
        sll(n);
        r=n/7;
        flag=0;
        while(r>=0)
        {
            if((n-(r*7))%4==0)
            {
                flag=1;
                break;
            }
            r--;
        }
        if(flag)
            p(r*7),pbl();
        else
            printf("-1\n");
    }
return 0;
}
