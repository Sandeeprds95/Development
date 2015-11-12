/*
    Author   : Sandeep Ravindra
    Contest  : practice
    Problem  : knapsack
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

int wt[2001], val[2001];
int s, n;
int max_val[2001][2001];

void find_max_val()
{
    fr(i,0,n+1)
    {
        fr(j,0,s+1)
        {
            if(i == 0 || j == 0)
                max_val[i][j] = 0;

            else if(j >= wt[i-1])
                max_val[i][j] = max(val[i-1] + max_val[i-1][j - wt[i-1]], max_val[i-1][j]);

            else
                max_val[i][j] = max_val[i-1][j];
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    s(s) s(n)

    fr(i,0,n)
    {
        s(wt[i])
        s(val[i])
    }
    find_max_val();
    cout<<max_val[n][s];

return 0;
}
