/*
    Author   : Sandeep Ravindra
    Contest  : CODECHEF LONG OCT15
    Problem  : SUBINC
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
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
#define     sd(n)       scanf("%lf",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);

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

typedef     pair<ll,ll> pii;

ll n;
ll a[123456];
ll ans;

void solve(){
    ans=0;
    sll(n)
    if(n == 1) {
        sll(a[0])
        cout<<"1\n";
    } else {
        for(int i=0;i<n;++i) {
            sll(a[i])
        }
        ll c=1;
        for(int i=1;i<n;++i) {
            if(a[i]>=a[i-1]) {
                c++;
            } else {
                ans += ((c*(c+1))>>1);
                c=1;
            }
        }
        ans += (c*(c+1))>>1;
        cout<<ans<<"\n";
    }
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
    TEST
        solve();
return 0;
}
