/*
    Author   : Sandeep Ravindra
    Contest  : practice
    Problem  : aggressive cows
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
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

ll a[100000];
ll n,c;

bool F(int x)
{
    int cows_placed = 1, pos = a[0];
    fr(i,1,n)
    {
        if(a[i] - pos >= x)
        {
            if(++cows_placed == c)
                return true;
            pos = a[i];
        }
    }
    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif

    TEST
    {
        sll(n) sll(c)
        fr(i,0,n)
            sll(a[i])
        sort(a,a+n);
        int start = 0, last = a[n-1] - a[0] + 1;
        int mid;
        while(last - start > 1)
        {
            mid = (start + last)>>1;
            (F(mid) ? start : last) = mid;
        }
        printf("%d\n",start);
    }
return 0;
}
