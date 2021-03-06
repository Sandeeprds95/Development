/*
	Author   : Sandeep Ravindra
	Contest  :
	Problem  :
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>

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

int p[80000],a[1000005];
int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
    memset(a,0,sizeof(a));
    for(int i=2;i <= sqrt(1000000);i++)
    {
        if(a[i] == 0)
        {
            for(int j = 2 ; j*i < 1000000 ; j++)
                a[j*i] = 1;
        }
    }
    a[1] = a[0] = 1;
    for(int i=0,j=0;i<1000001;i++)
    {
        if(a[i] == 0 && j<80000)
        {
            p[j] = i;
            j++;
        }
    }
    TEST
    {
        int n;
        int pos=0;
        int f=0;
        s(n);
        while(pos<80000)
        {
            if(p[pos] == n)
            {
                f=1;
                break;
            }
            else if(p[pos] > n)
                break;
        pos++;
        }
        if(f)
            p(pos+1);
        else
            printf("-1");
        pbl();
    }
return 0;
}
