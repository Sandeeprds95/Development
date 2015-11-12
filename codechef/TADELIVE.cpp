/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Delivery Man
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<stack>
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

#define     fr(i,a,b)	    for(int i=a;i<b;i++)

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

#define     TEST            int _t;s(_t);while(_t--)

typedef     pair<int,int> pii;

#define     MOD         1000007
#define     MAX         20
#define     inf         INT_MAX

int compare(const pii &a,const pii &b)
{
    if(a.F > b.F)
        return 1;
    return 0;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    ll n,x,y;
    sll(n),sll(x),sll(y);
    vi a(n+3);
    vi b(n+3);
    fr(i,0,n)
        sll(a[i]);
    fr(i,0,n)
        sll(b[i]);
    vector<pii> v;
    fr(i,0,n)
        v.PB(MP(abs(a[i]-b[i]),i));

    sort(v.begin(),v.end(),compare);

    ll ans = 0,aorder = 0,border = 0;
    fr(i,0,n)
    {
        if(a[v[i].S] > b[v[i].S])
        {
            if(aorder < x)
                ans+= a[v[i].S],
                aorder++;
            else
                ans+=b[v[i].S],
                border++;
        }
        else
        {
            if(border < y)
                ans+= b[v[i].S],
                border++;
            else
                ans+=a[v[i].S],
                aorder++;
        }
    }
    pll(ans),pbl();
return 0;
}
