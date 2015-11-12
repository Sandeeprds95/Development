/*
	Author   : Sandeep Ravindra
	Contest  :
	Problem  :
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>

using namespace std;

#define	    ll		    long long

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sl(n)	    scanf("%ld",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fall(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)


int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        ll x,y;
        sll(x),sll(y);
        ll a = min(abs(x),abs(y));
        x = abs(x) - a;
        y = abs(y) - a;
        if(x==0)
        {
            if(y%2)
                printf("%lld\n", 2*a + 2*y - 1);
            else
                printf("%lld\n", 2*a + 2*y);
        }
        else if(y==0)
        {
            if(x%2)
                printf("%lld\n", 2*a + 2*x + 1);
            else
                printf("%lld\n", 2*a + 2*x);
        }
    }
return 0;
}
