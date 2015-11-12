/*
	Author   : Sandeep Ravindra
	Contest  : Codechef Long
	Problem  : Chef and chain
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

#define	    p(n)	    printf("%d",n)
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
		//freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        string s;
        cin>>s;
        int c1 = 0, c2 = 0;
        fr(i,0,s.size())
        {
            if(s[i] == '+')
                c1++;
            else
                c2++;
            i++;
            if(i == s.size())
                break;
            if(s[i] == '+')
                c2++;
            else
                c1++;
        }
        c1 > c2 ? p(c2) : p(c1);
        pbl
    }
return 0;
}
