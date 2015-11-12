/*
	Author   : Sandeep Ravindra
	Contest  : January long'15
	Problem  : Sereja and votes
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

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        int n;
        int b[10003];
        ll sum = 0;
        s(n);
        fr(i,0,n)
            s(b[i]),
            sum+= b[i];
        printf("%lld\n",sum);
            double a[10003];
            //double sum2 = 0;
            ll sum3 = 0;
            fr(i,0,n)
                a[i] = ((double)(b[i] * 100) / sum),
                printf("%f ",a[i]),
                sum3+= ceil(a[i]);
                //sum2+= (double)a[i];

            printf("%lld\n",sum3);
            if(sum3 == sum)
            {
                int i=0;
                for(;i<n;i++)
                {
                    if(ceil(a[i]) != b[i])
                        break;
                }
                if(i == n)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
                printf("NO\n");
    }
return 0;
}
