/*
    Author   : Sandeep Ravindra
    Contest  : April long'15
    Problem  : Chef and Interview
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<string>
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

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define     fall(i,a,b)     for(int i=a;i>b;i--)
#define	    all(n)          n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n)
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

int main()
{
    long n;
    ll sum;
    TEST
    {
        sl(n);
        int f = 0;
        sum = n + 1;
        fall(i,sqrt(n),1)
        {
            if(n%i == 0)
            {
                if(n/i == i)
                    sum+=i;
                else
                    sum+= n/i+i;
            }
        }
        if(n == 1)
            printf("1\n");
        else
            printf("%lld\n",sum);
    }
return 0;
}
