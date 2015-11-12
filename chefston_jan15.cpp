/*
	Author   : Sandeep Ravindra
	Contest  : January Long'15
	Problem  : Chef and stones
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>

using namespace std;

#define	    ll		    long long int
#define     D               double
#define     LD              long double

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sl(n)	    scanf("%ld",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fr(i,a,b)	    for(ll i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<ll,ll> pii;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
	TEST
	{
        ll n,k;
        sll(n),sll(k);
        vector<pii> v(n+3);
        fr(i,0,n)
        {
            ll x;
            sll(x);
            v[i].F = x;
        }
        fr(i,0,n)
        {
            ll x;
            sll(x);
            v[i].S = x;
        }
        ll m = 0;
        fr(i,0,n)
        {
            if(((k / v[i].F)*v[i].S) > m)
                m = (k / v[i].F)*v[i].S;
        }
        pll(m),pbl();
	}
return 0;
}
