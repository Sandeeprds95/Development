/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Subarrays
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>
#include<deque>

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

void printMaxK(ll a[],ll n,ll k)
{
    ll i;
    deque<ll> q(k);
    for(i = 0; i < k; i++)
    {
        while((!q.empty()) && a[i] >= a[q.back()])
            q.pop_back();

        q.push_back(i);
    }
    for(;i<n;i++)
    {
        printf("%lld ",a[q.front()]);

        while((!q.empty()) && q.front() <= i - k)
            q.pop_front();

        while((!q.empty()) && a[i] >= a[q.back()])
            q.pop_back();

        q.push_back(i);
    }
    printf("%lld",a[q.front()]);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    ll n,k,e;
    sll(n);

    ll a[n];

    fr(i,0,n)
         sll(a[i]);
    sll(k);

    printMaxK(a,n,k);
    return 0;
}
