
/*
    Author   : Sandeep Ravindra
    Contest  : April long'15
    Problem  : Chef and Piano Scales
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
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)
#define     mod             1000003

typedef     pair<int,int> pii;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    TEST
    {
        string s;
        int n, ans = 0, c = 0;
        cin>>s; s(n)
        fr(i,0,s.size())
            c += (s[i] == 'T'?2:1);
        int totalKeys = 12*n - 1;
        totalKeys/=c;
        for(;totalKeys--;)
            ans += (12*n - ((totalKeys+1)*c));
        p(ans)
        pbl
    }
return 0;
}
