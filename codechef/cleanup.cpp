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
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        int n,m,a[1000]={},x;
        s(n),s(m);
        fall(i,0,m)
        {
            s(x);
            a[x-1]=1;
        }
        int k=0;
        fall(i,0,n)
        {
            if(a[i]==0 && k%2==0)
                p(i+1),printf(" "),a[i]=1,k++;
            else if(a[i]==0)
                k++;
        }
        pbl();
        fall(i,0,n)
        {
            if(a[i]==0)
                p(i+1),printf(" ");
        }
        pbl();
    }
return 0;
}
