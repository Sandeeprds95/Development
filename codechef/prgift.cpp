//Che and Gift - AUG14
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
#define     max(a,b)		((a)>(b)?(a):(b))
#define     min(a,b)		((a)<(b)?(a):(b))
#define	    ll			long long

int main()
{
	int t,n,k,a[100];
    s(t);
	while(t--)
	{
		s(n);s(k);
		fall(i,0,n)
		s(a[i]);
		int c=0;
		fall(i,0,n)
            if(a[i]%2==0)
                c++;

		if(k==0 && c==n)
            printf("NO\n");
		else if(c>=k)
            printf("YES\n");
		else
            printf("NO\n");
	}
	return 0;
}
