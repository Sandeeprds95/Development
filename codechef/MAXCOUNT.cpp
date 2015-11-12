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
#define     min(a,b)		    ((a)<(b)?(a):(b))
#define	    ll			        long long

int main()
{
	int t,i;
	s(t);
	while(t--)
    {
        int a[10000]={};
        int n,limit=0;
        s(n);
        int temp;
        fall(i,0,n)
        {
            s(temp);
            a[temp-1]++;
            if(limit<temp)
                limit=temp;
        }
        temp=0;
        fall(i,0,limit)
        {
            if(a[i]>a[temp])
                temp=i;
        }
        printf("%d %d\n",temp+1,a[temp]);
    }
return 0;
}
