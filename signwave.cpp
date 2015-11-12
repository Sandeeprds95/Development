/*
    Author   : Sandeep Ravindra
    Contest  : March long'15
    Problem  : Signwave
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

#define     p(n)        printf("%d",n)
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n)
#define     pbl      printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

ll a[55],b[55];

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif

/*
4
2 0 1
2 0 2
3 2 1
3 2 3
*/
	b[0] = 2;

	fr(i,1,53)
        b[i] = b[i-1]<<1;

	a[0] = 3;

	fr(i,1,53)
        a[i] = a[i-1] + b[i-1];

    TEST
    {
        int s,c,k;
        s(s)s(c)s(k)
        ll ans[55] = {0};
        fr(i,0,s)
            ans[i] = a[i];
        fr(i,0,c)
        {
            if(i < s)
                ans[i] = ans[i] + b[i];
            else
                ans[s-1] = ans[s-1] + b[i];
        }

        if(c == 0)
        {
            if(k > s)
                printf("0\n");
            else
                pll(a[s-k]),
                pbl
        }

        else if(k == 1)
        {
            cout<<"k == 1"<<endl;
            if(s == 0)
            {
                ll ns = (1<<(c+1))-2;
                cout<<"ns: "<<ns<<endl;
                pll(ns),
                pbl
            }
            else if(s > c)
            {
                cout<<"a: "<<a[s-k]<<endl<<a[49]<<endl;
                pll(a[s-k]),
                pbl
            }

            else
            {
                ll ns = ((1<<(c+1))-2);
                ll sn = ((1<<(s))-2);
                ll r = a[s-k] + ns -sn;
                cout<<"a: "<<a[s-k] + ns - sn<<endl;
                pll(r),
                pbl
            }
        }

        else if(k <= s)
            pll(ans[s-k]),
            pbl

        else
        {
            if(s == 0 || k > s)
                printf("0\n");
            else
                pll(a[s-k+1]),
                pbl
        }
    }
return 0;
}
