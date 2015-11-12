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
#define	    psp(n)	    printf(" ")
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)


int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
	ll n,k;
	ll a[100000]={};
	sll(n),sll(k);
	fall(i,0,n)
	    sll(a[i]);
    ll temp;
    if(k==0)
        fall(i,0,n)
            printf("%lld ",a[i]);
    else if(k%2==0)
    {
        temp=*min_element(a,a+n);
        fall(i,0,n)
            printf("%lld ",a[i] - temp);
    }
    else
    {
        temp=*max_element(a,a+n);
        fall(i,0,n)
            printf("%lld ",temp - a[i]);
    }
return 0;
}
