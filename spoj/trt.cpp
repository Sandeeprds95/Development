
/*
    Author   : Sandeep Ravindra
    Contest  : practice
    Problem  : Party Schedule
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

int cache[2001][2001];
int a[2002];

int calc(int year, int start, int last)
{
    if(start > last)
        return 0;
    if(cache[start][last] != -1)
        return cache[start][last];

    return cache[start][last] = max(
        calc(year + 1, start + 1, last) + a[start]*year,
        calc(year + 1, start, last - 1) + year*a[last]);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    int n;
    s(n)
    fr(i,0,n)
        s(a[i])
    memset(cache,-1,sizeof(cache));
    cout<<calc(1,0,n-1);
return 0;
}
