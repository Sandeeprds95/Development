/*
    Author   : Sandeep Ravindra
    Contest  : LUNCHTIME
    Problem  : Puppy and cat
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include <cstdlib>
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
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)
#define     mod             100000

typedef     pair<double,ll> pii;

ll n,k;
ll x,y;
ll ans;
map<char,int>m;

void solve(){
    sll(n)sll(k)
    ans = n*n;
    m.clear();
    for(int i=0;i<k;i++){
        sll(x)sll(y)
        char m1 = (char)x-y;
        if(m.find(m1)->S >0)
            continue;
        --ans;
        ans -= n-max(x,y) + min(x,y)-1;
        m[m1]++;
    }
    cout<<ans<<endl;
}

int main(){
    TEST
        solve();
return 0;
}
