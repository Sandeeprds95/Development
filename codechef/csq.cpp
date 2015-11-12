/*
    Author   : Sandeep Ravindra
    Contest  : April long'15
    Problem  : Count Sequences
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<string>
#include<vector>
#include<limits.h>
#include<queue>

using namespace std;

#define     ll              long long int
#define     D               double
#define     LD              long double

#define     s(n)        scanf("%d",&n);
#define     ss(n)       scanf("%s",n);
#define     sc(n)       scanf("%c",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define     fall(i,a,b)     for(int i=a;i>b;i--)
#define	    all(n)          n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)
#define     mod             1000003

typedef     pair<int,int> pii;

ll func(ll, ll);

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif // ONLINE_JUDGE
    TEST
    {
        ll n,l,r;
        sll(n) sll(l) sll(r)
        ll num = r - l + 1;
        ll a = 1,b = 1;
        fr(j,1,num+1)
            a=((a%mod)*(j%mod))%mod;
        fr(j,n+1,num+n+1)
            b=((b%mod)*(j%mod))%mod;
        ll ans = ((b*func(a,1000001)%mod) - 1)%mod;
        pll(ans)
        pbl
    }
return 0;
}

ll func(ll x, ll m)
{
    if(!m)
        return 1;
    if(m == 1)
        return x;
    ll h = func(x,m>>1);
    if(m%2)
        return (((h*h)%mod)*x)%mod;
    else
        return (h*h)%mod;
}
