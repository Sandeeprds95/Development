/*
    Author   : Sandeep Ravindra
    Contest  : HR
    Problem  : BFS
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

int n,m;
ll l;
ll x,y;
vector<pii>v;
ll ans,fans=0;

void checkPoint(ll x, ll y){
    int beg=0,last=n;
    fans=0;
    while(beg<last){
        int mid = (beg+last)/2;
        if(v[mid].F >=x || v[mid].S >=y){
            fans=max(fans,mid+1);
            return;
        }
        else if(v[mid].F <=x && v[mid].S <= y && v[mid].F+l >=x && v[mid].S+l >=y)
            beg=mid+1;
        else{
            last=mid-1;
        }
    }
}

void solve(){
    s(n)s(m)sll(l)
    //v=vector<pii>(n+2);
    for(int i=0;i<n;++i){
        sll(x)sll(y)
        //v[i].F=x,v[i].S=y;
        v.PB(MP(x,y));
    }
    sort(all(v));
    for(int i=0;i<m;++i){
        sll(x)sll(y)
        checkPoint(x,y);
    }
    cout<<fans;
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
        solve();
return 0;
}
