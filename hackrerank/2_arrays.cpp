/*
    Author   : Sandeep Ravindra
    Contest  : HR
    Problem  : BFS
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
#define     vi              vector<ll>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)
#define     mod             100000

typedef     pair<int,int> pii;

int n;
ll k;
vi v;
vi v2;

void solve(){
    bool flag=true;
    s(n)sll(k)
    v=vi (n+1);
    v2=vi (n+1);
    v.clear();v2.clear();
    for(int i=0;i<n;++i) {
        ll x;
        sll(x)
        v.PB(x);
    }
    for(int i=0;i<n;++i) {
        ll x;
        sll(x)
        v2.PB(x);
    }
    sort(all(v));
    sort(all(v2));
    reverse(all(v2));
    for(int i=0;i<n;++i){
        if(v[i]+v2[i] < k){
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

//Driver program
int main(){
   // #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
   // #endif
    TEST
        solve();
return 0;
}
