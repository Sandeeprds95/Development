/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Happy Numbers I
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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
        ll n;
        sll(n);
        ll m=n,ans=0,a=0,c=1;
        int a1[1000] = {};
        bool flag =true;
        while(1)
        {

            a+=(m%10)*(m%10);
            m/=10;

            if(a == 1 && m==0)
                break;

            else if(a1[a] == 1 && m == 0)
            {
                flag=false;
                break;
            }

            if(m == 0)
                //p(a),pbl(),
                a1[a] = 1,
                m = a,
                a=0,
                c++;
        }
        if(flag)
            p(c),pbl();
        else
            printf("-1\n");
return 0;
}
