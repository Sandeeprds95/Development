/*
    Author   : Sandeep Ravindra
    Contest  : March long'15
    Problem  : Chef and notebooks
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

#define     fr(i,a,b)       for(ll i=a;i<b;i++)
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

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif

    TEST
    {
        int x,y,k,n,a,b;
        s(x)s(y)s(k)s(n)
        bool flag = false;

        if(x <= y)
            flag = true;
        else
        {
            x-=y;
            fr(i,0,n)
            {
                s(a)s(b)
                if(x <= a && b <= k)
                    flag = true;
            }
        }
        if(flag)
            printf("LuckyChef\n");
        else
            printf("UnluckyChef\n");
    }

return 0;
}

