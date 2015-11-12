/*
    Author   : Sandeep Ravindra
    Contest  : April long'15
    Problem  : Broken Phone
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

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    TEST
    {
        ll n;
        sll(n)
        ll a[100005];
        fr(i,1,n+1)
            sll(a[i])
        ll c = 0;
        if(n == 1)
        {
            printf("0\n");
            continue;
        }
        a[0] = a[1];
        a[n + 1] = a[n];
        fr(i,1,n+1)
        {
            if(a[i] != a[i-1] || a[i] != a[i+1])
                c++;
        }
        pll(c)
        pbl
    }

return 0;
}

