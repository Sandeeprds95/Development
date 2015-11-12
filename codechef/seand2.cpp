/*
	Author   : Sandeep Ravindra
	Contest  : January long'15
	Problem  : Sereja and number division 2
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
#define     vi              vector<ll>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b , a%b);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        string s;
        cin>>s;
        int n;
        s(n);
        ll x;
        fr(i,0,n)
        sll(x);
        cout<<s;
        pbl();
    }
return 0;
}
