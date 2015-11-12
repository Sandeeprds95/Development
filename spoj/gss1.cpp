/*
    Author   : Sandeep Ravindra
    Contest  : practice
    Problem  : Can you answer these queries I
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<string>
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

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define	    all(n)          n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n)
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

ll n,l,r;
ll a[50005];

struct data
{
    ll sum, pref, suff, ans;
}t[200000];

data combine(data l, data r)
{
    data res;
    res.sum = l.sum + r.sum;
    res.pref = max(l.pref, l.sum + r.pref);
    res.suff = max(r.suff, r.sum + l.suff);
    res.ans = max(max(l.ans , r.ans), l.suff + r.pref);
    return res;
}

data query(ll v, ll tl, ll tr, ll l, ll r)
{
    if(l == tl && r == tr)
        return t[v];
    ll tm = (tl + tr)>>1;

    if(r <= tm)
        return query(v<<1, tl, tm, l, r);
    else if(l > tm)
        return query((v<<1) +1, tm + 1, tr, l, r);
    return combine(query(v<<1, tl, tm, l, tm),
                   query((v<<1)+1, tm + 1, tr, tm + 1, r));
}

data make_data(ll val)
{
    data res;
    res.sum = res.pref = res.suff = res.ans = val;
    return res;
}

int build(ll a[], ll v, ll tl, ll tr)
{
    if(tl == tr)
        t[v] = make_data(a[tl]);
    else
    {
        ll tm = (tl + tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2 + 1, tm + 1, tr);
        t[v] = combine(t[v*2] , t[(v*2) + 1]);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    sll(n)
    fr(i,0,n)
        sll(a[i])
    build(a,1,0,n-1);
    ll q;
    sll(q)
    while(q--)
    {
        sll(l) sll(r)
        data answer = query(1,0,n-1,l-1,r-1);
        pll(answer.ans);
        pbl
    }
return 0;
}
