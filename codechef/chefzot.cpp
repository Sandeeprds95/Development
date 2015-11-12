/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Chef and Subarray
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>

using namespace std;

#define	    ll		    long long

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fall(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    p(n )	    printf("%d ",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)


int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    int x,c=0,pc=0;
    s(n);
    fall(i,0,n)
    {
        s(x);
        if(x)
            c++;
        else
        {
            if(c>pc)
                pc=c;
            c=0;
        }
    }
    p(c>pc?c:pc);
    pbl();
return 0;
}
