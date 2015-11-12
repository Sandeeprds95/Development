/*
	Author   :  Sandeep Ravindra
	Contest  :  Ractice
	Problem  :  Open the Dragon scroll (DRAGONXOR)
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
#define	    p(n)		    printf("%d",n)
#define	    pll(n)		    printf("%lld",n)
#define	    pbl(n)		    printf("\n")

typedef long long ll;

int main()
{
    int t;
    for(s(t);t--;)
    {
        int n,a,b,a_1=0,a_0=0,b_1=0,b_0=0,l,pairs;
        s(n),s(a),s(b);
        l=n;
        // Number of 1's and 0's in a
        while(l--)
        {
            if(a&1)
                a_1++;
            else
                a_0++;
            a>>=1;
        }
        l=n;
        // Number of 1's and 0's in a
        while(l--)
        {
            if(b&1)
                b_1++;
            else
                b_0++;
            b>>=1;
        }
        /*
        There can be at max x = minimum _ of( number of 1s in A, number of 0s in B).
        Similarly, pair each 1 bit of B with a 0 bit of A.
        There can be at max y = minimum _ of( number of 1s in B, number of 0s in A).
        Rest of the pairs are either (1,1) or (0,0).
        */
        pairs= min(a_1,b_0) + min(a_0,b_1);
    printf("%d\n", ((1<<pairs)-1) << (n-pairs));
    }
return 0;
}
