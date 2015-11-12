/*
	Author   : Sandeep Ravindra
	Contest  : DECEMBER LONG 2014 (PRACTICE)
	Problem  : XORSUB
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
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        int n,k,x,y;
        int xor_values[1025] = {0};
        s(n),s(k);
        fall(i,0,n)
        {
            s(x);
            xor_values[x] = 1;
            fall(j,0,1025)
            {
                if(xor_values[j])
                {
                    y = x^j;
                    xor_values[y] = 1;
                }
            }
        }
        int max_value = 0;
        fall(i,0,1025)
        {
            if(xor_values[i])
            {
                 y = i^k;
                if(y > max_value)
                    max_value = y;
            }
        }
        p(max_value),pbl();
    }
return 0;
}
