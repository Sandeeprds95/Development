/*
	Author   : Sandeep Ravindra
	Contest  : Codechef Long
	Problem  : chef and strange formula
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<ctype.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>

using namespace std;

#define	    ll		    long long int
#define     D               double
#define     LD              long double

#define     s(n)	    scanf("%d",&n);
#define     ss(n)	    scanf("%s",n);
#define     sc(n)	    scanf("%c",&n);
#define     sl(n)	    scanf("%ld",&n);
#define     sll(n)	    scanf("%lld",&n);
#define     slf(n)      scanf("%lf",&n);

#define     fr(i,a,b)	    for(ll i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n);
#define	    pl(n)	    printf("%ld",n);
#define	    pll(n)	    printf("%lld",n);
#define	    plf(n)	    printf("%lf",n);
#define	    pbl  	    printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

ll result[10000] = {1};
int n;
ll a[100002], m, dp[10000002] = {0,2};
//result[10000] = {1};
ll k = 1;

ll fact(ll x)
{
    if(x >= m)
        return 0;
    if(x >= k)
    {
        fr(i,k,x+1)
        {
            result[i] = ((i%m) * (result[i-1]%m))%m;
        }
        k = x+1;
    return result[x]%m;
    }
    else
        return result[x]%m;
}


//dp[100002] = {2};
ll ans = 0;

void solve(ll n)
{
    fr(i,2,n+1)
    {
        dp[i] = ((dp[i-1])%m + (((((i-1)%m)*((i)%m)))/2)%m + ((i%m)*((fact(i) + i)%m))%m)%m;
       // ans = ((ans%m) + (dp[a[i-1]]%m))%m;
    }
}

int main()
{
   // ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    s(n)
    ll x;
    sll(m)
    fr(i,0,n)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    solve(a[n-1]);
    fr(i,0,n)
       // printf("%lld ",dp[a[i]]),
        ans = ((ans%m) + (dp[a[i]]%m))%m;
   // pbl
    pll(ans)
return 0;
}
