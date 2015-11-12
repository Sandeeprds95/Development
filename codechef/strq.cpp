/*
    Author   : Sandeep Ravindra
    Contest  : Codechef Long (Feb)
    Problem  : chef and strings
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

#define     LL          long long int
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
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

string s;
LL ans;
char x,y;
LL l,r,c,c1,f;

vector<pair<pii,pii> > v[1000000];
vector c, h, e, f;

void solve()
{
    fr(i,0,s.size())
    {
        if(s[i] == 'c')
            c.PB(i);
        else if(s[i] == 'h')
            h.PB(i);
        else if(s[i] == 'e')
            e.PB(i);
        else
            f.PB(i);
        fr(j,i+1,s.size())
        {
            if(s[j] == 'c')
                v[i][j].F.F = v[i][j-1].F.F + 1;
            else if(s[j] == 'h')
                v[i].F.S =v[i][j-1].F.S + 1;
            else if(s[j] == 'e')
                v[i].S.F = v[i][j-1].S.F + 1;
            else
                v[i].S.S = v[i][j-1].S.S + 1;
        }
    }
}

int main()
{
    //ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    cin>>s;
    solve();
    LL q;
    sll(q);
    while(q--)
        //countstrings();
    {
        ans = 0;
    getchar();
    x = getchar();
    getchar();
    y = getchar();
    getchar();
    sll(l)sll(r)

        if(x == 'c')
            for(int i = 0; i < c.size(); i++)
                ans+ = v[c[i]][]
    }
return 0;
}
