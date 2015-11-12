/*
	Author   : Sandeep Ravindra
	Contest  : Codechef Long
	Problem  : Ranklist
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<ctype.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>

using namespace std;

#define	    ll		    long long int
#define     D               double
#define     LD              long double

#define     s(n)	    scanf("%d",&n);
#define     ss(n)	    scanf("%s",n);
#define     sc(n)	    scanf("%c",&n);
#define     sl(n)	    scanf("%ld",&n);
#define     sll(n)	    scanf("%lld",&n);
#define     slf(n)      scanf("%lf",&n);

#define     fr(i,a,b)	    for(ll i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n);
#define	    pl(n)	    printf("%ld",n);
#define	    pll(n)	    printf("%lld",n);
#define	    plf(n)	    printf("%lf",n);
#define	    pbl	    printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

int main()
{
   // ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        int n;
        s(n)
        ll s;
        sll(s)
        ll a[100002];
        fr(i,0,100002)
            a[i] = 1;
        ll s1 = s - n;
        for(ll i = 1; i < n && s1 > 0; i++)
        {
            if(i <= s1)
                a[i]+=i,
                s1-=i;
            else
            {
                a[i]+=s1;
                s1 = 0;
            }
        }
        ll ans = 0;
        fr(i,1,n)
        {
            if(a[i] != i+1)
                ans++;
        }
        pll(ans)
        pbl
    }
return 0;
}
