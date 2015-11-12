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

int w, n;
int val[101], weight[101];
int min_val[101][505];
int m;

void find_min_fun() // knapsack 0-1
{
    m = w; // for finding the min weight
    fr(i,0,n+1)
    {
        fr(j,0,w+1)
        {
            if(i == 0 || j == 0)
                min_val[i][j] = 0;

            else if(j >= weight[i-1])
            {
                min_val[i][j] = max(val[i-1] + min_val[i-1][j - weight[i-1]], min_val[i-1][j]);
            }

            else
            {
                min_val[i][j] = min_val[i-1][j];
            }
        }
    }
    while(min_val[n][m-1] == min_val[n][m])
        m--;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    s(w) s(n)

    while(w && n)
    {
        fr(i,0,n)
        {
            s(weight[i])
            s(val[i])
        }
        getchar();
        find_min_fun();
        printf("%d %d\n",m,min_val[n][w]);
        s(w) s(n)
    }

return 0;
}
