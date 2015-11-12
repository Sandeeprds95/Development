/*
	Author   : Sandeep Ravindra
	Contest  : Praatice
	Problem  : Wise and Miser
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
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

#define     MAX         100
#define     inf         INT_MAX
int a[MAX + 5][MAX + 5];

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    int n,m;
    s(n),s(m);
    fr(i,0,n)
        fr(j,0,m)
            s(a[i][j]);
    for(int i = n-1 ; i>0 ; i--)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(j==0)
                a[i-1][j]+= min(a[i][j],a[i][j+1]);
            else if(j == m-1)
                a[i-1][j]+= min(a[i][j-1],a[i][j]);
            else
                a[i-1][j]+= min(a[i][j-1],min(a[i][j],a[i][j+1]));
        }
    }
    printf("%d\n",*min_element(a[0],a[0]+m));
return 0;
}
