/*
	Author   : Sandeep Ravindra
	Contest  : January Long'15
	Problem  : One dimensional King
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>
#include<stack>

using namespace std;

#define	    ll		    long long int
#define     D               double
#define     LD              long double

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sl(n)	    scanf("%ld",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fr(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

vector<pii> v;
ll ans = 0, n;

void solve()
{
    int i = 0,j, f = 0;
    ans = 1;
    for( j = 1; j < n; j++)
    {
        //printf("%d %d\n",v[j].S, v[i].F);
        if(v[j].S > v[i].F)
        {
            ans++;
            i = j;
        }
    }
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        sll(n);
        v.clear();
        fr(i,0,n)
        {
            int x,y;
            s(x),s(y);
            v.PB(MP(y,x));
        }
        sort(v.begin(),v.end());
//        int c = 0;
//        for(int i = 0;i < n-1;i++)
//        {
//            if(v[i+1].S <= v[i].F)
//                c++;
//            else
//                break;
//        }
//        if(c == n-1)
//            printf("1\n");
//        else
            solve(),
        pll(ans),
        printf("\n");
    }
return 0;
}
