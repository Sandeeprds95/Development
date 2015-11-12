/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Aibohphobia
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<stack>
#include<queue>

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

#define     TEST            int _t;s(_t);while(_t--)
typedef     pair<int,int> pii;

#define     MAX         20
#define     inf         INT_MAX
int a[MAX + 5][MAX + 5];

int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        string s;
        int ans = 0;
        cin>>s;
        for(int i = 0, j = s.size()-1; i<=j;i++,j--)
        {
            if(s[i] != s[j])
                ans++;
        }
        p(ans),pbl();
    }
return 0;
}
