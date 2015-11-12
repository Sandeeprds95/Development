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

int n,d;
vi v;
ll ans;

void solve(){
    ans=0;
    s(n)s(d)
    v.clear();
    for(int i=0;i<n;++i){
        int x; s(x)
        v.PB(x);
    }
    sort(all(v),greater<int>());
    for(int i=0;i<n-1;++i){
        if(v[i]-v[i+1]<d){
            ans+=v[i]+v[i+1];
            ++i;
        }
    }
    printf("%lld\n",ans);
}

int main(){
    TEST
        solve();
return 0;
}
