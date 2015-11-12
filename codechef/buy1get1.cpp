/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Buy1 - Get 1
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>

using namespace std;

#define	    ll		        long long

#define     s(n)		    scanf("%d",&n)
#define     ss(n)		    scanf("%s",n)
#define     sc(n)		    scanf("%c",&n)
#define     sll(n)		    scanf("%lld",&n)

#define     fall(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)		    printf("%d",n)
#define	    p(n )		    printf("%d ",n)
#define	    pll(n)		    printf("%lld",n)
#define	    pbl(n)		    printf("\n")

#define     TEST            int _t;s(_t);while(_t--)

int main()
{
    TEST
    {
        string s;
        cin>>s;
        int a[130]={},c=0;
        fall(i,0,s.size())
            a[s[i]]++;
        fall(i,'A','z'+1)
        {
            if(a[i]&1)
                c+=a[i]/2 +1;
            else
                c+=a[i]/2;
        }
        p(c),pbl();
    }
return 0;
}
