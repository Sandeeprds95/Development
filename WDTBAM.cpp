/*
    Author   : Sandeep Ravindra
    Contest  : CODECHEF LONG OCT15
    Problem  : WDTBAM
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

int n;
string s;
string sans;
vector<ll> money;
ll c;
ll x;

void solve(){
    money.clear();
    c=0;
    s(n)
    cin>>s>>sans;
    for(int i=0;i<n+1;++i) {
        sll(x);
        money.PB(x);
    }
    for(int i=0;i<s.size();++i) {
        if(s[i]==sans[i])   ++c;
    }
    cout<<((c==n)?money[n]:*max_element(money.begin(),money.begin()+c+1))<<endl;
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    TEST
        solve();
return 0;
}
