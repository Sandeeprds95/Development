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
#define     sll(n)	    scanf("%lld",&n)

#define     fall(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    p(n )	    printf("%d ",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    ll a;
    sll(a);
    a=a%6;
    if(a==0 || a==1 || a==3)
        printf("yes\n");
    else
        printf("no\n");
return 0;
}
