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
int exi, tim, m;
int grid[12345][12345];
int x,y,z;

void solve(){
    int ans=0;
    s(n) s(exi) s(tim) s(m)
    for(int i=1;i<=n;++i) {
        grid[i][i]=0;
        for(int j=1;j<=n;++j) {
            if(i!=j)
                grid[i][j]=9999;
        }
    }
    for(int i=0;i<m;++i) {
        s(x)s(y)s(z)
        grid[x][y]=z;
    }
    for(int k=1;k<=n;++k) {
        for(int i=1;i<=n;++i) {
            for(int j=1;j<=n;++j) {
                if(grid[i][k]+grid[k][j] < grid[i][j])
                    grid[i][j]=grid[i][k]+grid[k][j];
            }
        }
    }
    for(int i=1;i<=n;++i) {
        if(grid[exi][i] <= tim || i == exi)
            ++ans;
    }
    cout<<ans;
}

//Driver program
int main(){
    //#ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    //#endif

    solve();
return 0;
}
