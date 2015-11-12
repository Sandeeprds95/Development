/*
    Author   : Sandeep Ravindra
    Contest  : March long'15
    Problem  : Devu and his class
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<set>
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
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);
#define     sll(n)      scanf("%lld",&n);

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define	    all(n)	    n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n);
#define     pbl      printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

int bg, gb;
int type, ans, sz;
int BG[100009],GB[100009];
char s[100009],s2[100009];

inline int power(int x,int y);

int solve()
{
    int r = 0;
    bg = gb = 0;
    fr(i,0,sz)
    {
        if(s[i] == s2[i])
            continue;
        if(s[i] == 'G')
            GB[gb++] = i;
        else
            BG[bg++] = i;
    }
    fr(i,0,gb)
        r += power(GB[i] - BG[i],type);
    return r;
}

inline int power(int x,int y)
{
    if(y==0)
        return 1;
    if(x < 0 )
        x *=-1;
    if(y==1)
        return x;
    return x*x;
}

int main()
{
    #ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif

    TEST
    {
        s(type)
        ss(s);
        sz = strlen(s);
        ll c1 = 0, c2 = 0;

        fr(i,0,sz)
        {
            if(s[i] == 'B')
                c1++;
            else
                c2++;
        }

        if(c1 == c2)
        {
            for(int i = 0; i < sz; i+=2)
            {
                s2[i] = 'B'; s2[i+1] = 'G';
            }

            ans = solve();

            for(int i = 0; i < sz; i+=2)
            {
                s2[i] = 'G'; s2[i+1] = 'B';
            }
            ans = min(ans,solve());
        }
        else
        {
            if(abs(c1-c2) > 1)
            {
                printf("-1\n");
                continue;
            }
            if(c1 > c2)
            {
                for(int i = 0; i < sz; i+=2)
                {
                    s2[i] = 'B'; s2[i+1] = 'G';
                }
            }
            else
            {
                for(int i = 0; i < sz; i+=2)
                {
                    s2[i] = 'G'; s2[i+1] = 'B';
                }
            }
            ans = solve();
        }
        printf("%d\n",ans);
    }
return 0;
}
