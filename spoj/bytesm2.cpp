
/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : DP - (BYTESM2)
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
	int h,w;
	int a[102][102] = {};
    TEST
    {
        s(h),s(w);
        fr(i,0,h)
            fr(j,0,w)
                s(a[i][j]);
        for(int i=h-2;i>=0;i--)
        {
            fr(j,0,w)
            {
                if(j-1 >=0 && j+1<w)
                {
                    a[i][j]+= max(a[i+1][j-1],max(a[i+1][j],a[i+1][j+1]));
                }
                else if(j-1 < 0)
                {
                    a[i][j]+= max(a[i+1][j],a[i+1][j+1]);
                }
                else
                {
                    a[i][j]+= max(a[i+1][j],a[i+1][j-1]);
                }
            }
        }
        printf("%d\n",*max_element(a[0],a[0] + w));
    }
return 0;
}

