/*
    Author   : Sandeep Ravindra
    Contest  : April long'15
    Problem  : Chef and Array
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

#define     fr(i,a,b)       for(ll i=a;i<b;i++)
#define	    all(n)          n.begin(),n.end()

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

typedef     pair<int,int> pii;

struct data
{
    int max_val;
} t[400005];

ll n;
ll a[100005];
ll m,x,y;

data make_data(int val)
{
    data res;
    res.max_val = val;
    return res;
}

data combine(data l, data r)
{
    if(l.max_val > r.max_val)
        return l;
    else
        return r;
}

void build(ll a[], ll v, ll tl, ll tr)
{
    if(tl == tr)
        t[v] = make_data(a[tl]);
    else
    {
        ll tm = (tl + tr)>>1;
        build(a, v<<1, tl, tm);
        build(a, (v<<1) + 1, tm + 1, tr);
        t[v] = make_data(max(t[v<<1].max_val,t[(v<<1) + 1].max_val));
    }
}

data query(ll v, ll tl, ll tr, ll l, ll r)
{
    if(l == tl && r == tr)
        return t[v];

    ll tm = (tr + tl)>>1;
    if(r <= tm)
        return query(v<<1, tl, tm, l, r);
    else if(l > tm)
        return query((v<<1)+1, tm + 1, tr, l, r);

    return combine(query(v<<1, tl, tm, l, tm),
               query((v<<1)+1, tm + 1, tr, tm + 1, r));
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    sll(n)
    fr(i,0,n)
        sll(a[i])
    sll(m) sll(x) sll(y)
    build(a,1,0,n-1);
    ll sum = 0;
    while(m--)
    {
        data ans = query(1,0,n-1,min(x,y),max(x,y));
        sum+=ans.max_val;
        x = (x + 7)%(n-1);
        y = (y + 11)%(n);
    }
    pll(sum)
    pbl
return 0;
}
