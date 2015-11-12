/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : CANDLE
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

#define     fr(i,a,b)	    for(int i=a;i<b;i++)

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
		freopen("in.txt","r",stdin);
	#endif
    int n,a[10],min,numOfZero,index,i;
    long int m;
    TEST
    {
        fr(i,0,10)
            s(a[i]);
        m = 1LL;
        numOfZero = a[0];
        while(a[0]>=0)
            m*=10, a[0]--;
        min=a[1];
        index=1;
        fr(i,2,10)
        {
            if(a[i]<min)
                min=a[i],index=i;
        }
        if(numOfZero+1 <= min)
            pl(m);
        else
        {
            while(min>=0)
                p(index),min--;
        }
        pbl();
    }
return 0;
}
