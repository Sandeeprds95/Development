/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Turbo Sort
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

void Merge(long a[], long s, long m, long e)
{
    long n1 = m - s + 1;
    long n2 = e - m;
    long b[n1], c[n2];

    for(long i=0; i<n1 ; i++)
        b[i] = a[s + i];
    for(long i=0 ; i<n2 ; i++)
        c[i] = a[m + 1 + i];

    long i=0,k=s,j=0;

    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
            a[k]=b[i],i++;
        else
            a[k]=c[j],j++;
        k++;
    }
    while(i<n1)
    {
        a[k]=b[i];
        k++,i++;
    }
    while(j<n2)
    {
        a[k]=c[j];
        k++,j++;
    }
}

long mergesort(long a[],long s,long e)
{
    if(s < e)
    {
        long m = s + (e-s)/2;
        mergesort(a,s,m);
        mergesort(a,m+1,e);
        Merge(a,s,m,e);
    }
}


int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
    long t;
    sl(t);
    long a[t];
    for(long i=0;i<t;i++)
        sl(a[i]);

    mergesort(a,0,t-1);

    for(long i=0;i<t;i++)
        printf("%ld\n",a[i]);
return 0;
}
