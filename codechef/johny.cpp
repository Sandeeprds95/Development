/*
	Author   :  Sandeep Ravindra
	Contest  :  Practice
	Problem  :  Uncld Johny (JOHNY)
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

/*int b_search(ll a[],int n,ll val)
{
    int f=0,e=n-1,mid;
    while(f<e)
    {
        mid=(f+e)/2;
        if(val==a[mid])
            return mid;
        else if(val>a[mid])
            f=mid+1;
        else
            e=mid-1;
    }
}
*/
int main()
{
    int t;
    s(t);
    while(t--)
    {
        int n,k,pos=0;
        s(n);
        ll a[n],val;
        fall(i,0,n)
            sll(a[i]);
        s(k);
        val=a[k-1];
        sort(a,a+n);
        fall(i,0,n)
            if(val>a[i])
                pos++;
        p(pos+1);pbl();
    }
    return 0;
}
