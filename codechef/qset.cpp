/*
	Author   : Sandeep Ravindra
	Contest  : January long'15
	Problem  : QSET
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

ll n,ans,m;
string s;

void findMultiples(string s)
{
    ll c,d;
    sll(c),sll(d);
   // pll(c),printf(" %lld\n",d);
    int b[3] = {0,0,0};
    //memset(b,0,sizeof(b));
    b[0]++;
    //printf("%d\n",b[0]);
    ll sum = 0;
//    fr(i,0,n)
//        printf("%c ",s[i]);
//    pbl();
    fr(i,c-1,d)
    {
        sum = (sum + s[i] - '0') % 3;
        b[sum]++;
    }
    //p(m),pbl();
//    fr(i,0,3)
//        printf("%d ",b[i]);
//    pbl();
    ans = 0;
    fr(i,0,3)
        ans+=b[i]*(b[i]-1)/2;
    pll(ans),pbl();
}

inline void solve()
{
        int cases;
        s(cases);
        if(cases == 1)
        {
            ll x;
            char y;
            sll(x);
            getchar();
            y = getchar();
            s[x - 1] = y;
        }
        else
            findMultiples(s);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif

    sll(n),sll(m);
    cin>>s;
    while(m--)
        solve();
return 0;
}
