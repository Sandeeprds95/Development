/*
    Author   : Sandeep Ravindra
    Contest  : COOK60
    Problem  : Maximize Disjoint Pair Sum
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<string.h>
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
#define     sll(n)      scanf("%I64d",&n);

#define     fr(i,a,b)       for(int i=a;i<b;++i)
#define	    all(n)	        n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%I64d",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)
#define     mod             100000

typedef     pair<double,ll> pii;

ll n,d;
ll ans = 0;

ll gcd(ll a,ll b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}

void solve(){
    ans=0;
    sll(n)sll(d)
    for(ll i=d;i<=n;i+=d){
        for(int j=i;j<=n;j+=d){
            if(gcd(i,j) == d)
                ans++;
        }

    }
    cout<<ans<<endl;
}

int main(){
    TEST
        solve();
return 0;
}
