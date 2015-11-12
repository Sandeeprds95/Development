#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		    ((a)>(b)?(a):(b))
#define     min(a,b)		(   (a)<(b)?(a):(b))
#define	    ll			        long long

int main()
{
    int t;
    s(t);
    while(t--)
    {
        int n,c=0;
        s(n);
        int wOfPie[n],limit[n];
        fall(i,0,n)
            s(wOfPie[i]);
        fall(i,0,n)
            s(limit[i]);
        sort(wOfPie,wOfPie+n);
        sort(limit,limit+n);
        int j=0;
        fall(i,0,n)
        {
            if(wOfPie[j]<=limit[i])
                c++,j++;
        }
        printf("%d\n",c);
    }
return 0;
}
