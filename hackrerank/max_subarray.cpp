/*
    Author   : Sandeep Ravindra
    Contest  : COOK60
    Problem  : KNODES
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
#include<list>

using namespace std;

#define     ll              long long int
#define     D               double
#define     LD              long double

#define     s(n)        scanf("%d",&n);
#define     ss(n)       scanf("%s",n);
#define     sc(n)       scanf("%c",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);

#define     fr(i,a,b)       for(int i=a;i<b;++i)
#define	    all(n)	        n.begin(),n.end()

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

typedef     pair<double,ll> pii;

ll n;
ll a[110000];

int max_subarray() {
    ll current_val=0;
    ll current_index=0;
    ll best_val=0;
    for(ll i=0;i<n;++i) {
        ll val=current_val+a[i];
        if(val>0) {
            if(current_val==0){
                current_index=0;
            }
            current_val=val;
        }
        else {
            current_val=0;
        }
        if(current_val>best_val) {
            best_val=current_val;
        }
    }
    return best_val;
}

void solve() {
    ll sum=0;
    sll(n)
    for(ll i=0;i<n;++i) {
        sll(a[i])
        if(a[i]>0)
            sum+=a[i];
    }
    if(sum>0)
        cout<<max_subarray()<<" "<<sum<<endl;
    else {
        sort(a,a+n);
        ll result=max_subarray();
        if(result) cout<<result<<" "<<a[0]<<endl;
        else cout<<a[n-1]<<" "<<a[n-1]<<endl;
    }
}

//Driver program
int main() {
//    #ifndef ONLINE_JUDGE
       //freopen("in.txt","r",stdin);
//    #endif
    TEST
        solve();
return 0;
}
