/*
	Author   : Sandeep Ravindra
	Contest  : Pracitce
	Problem  :
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

#define     fr(i,a,b)	    for(ll i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl    printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

int main()
{
	int t;
	s(t);
	while(t--)
	{
        int N;
        s(N);
        int a[N],i,j;
        for(i=0;i<N;i++)
        s(a[i]);
        int max = a[1]-a[0];
        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++)
            {
                if(a[j]-a[i] > max)
                max = a[j]-a[i];
            }
        }
        printf("%d\n",max);
	}
	return 0;
}
