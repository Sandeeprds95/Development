/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : BST
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
    int x,y,t;
    float z[10000];
    s(t);
    for(int i=0;i<t;i++)
    {
        getchar();
        s(x),getchar(),s(y);
        z[i]=(float)x/y;
    }
    sort(z,z+t,greater<float>());
    int ans = 1;
    int i=0,j=t-1;
    float one;
    while(i<=j)
    {
        ans++;
        one = 1.00 - z[i];
        while(z[j] <= one && j>=i)
        {
            one-=z[j];
            j--;
        }
        i++;
    }
    p(ans);
return 0;
}
