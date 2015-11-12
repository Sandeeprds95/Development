/*
    Author   : Sandeep Ravindra
    Contest  : HR
    Problem  : BFS
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
#include<algorithm>
#include<map>
#include<stack>
#include<string.h>
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

#define     fr(i,a,b)       for(int i=a;i<b;++i)
#define	    all(n)	        n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%I64d",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)
#define     mod             100000

typedef     pair<int,int> pii;

int n,k;
ll t;

void solve(){
    s(n)s(k)sll(t)
    string s;
    cin>>s;
    int len=s.size();
    if(k == 1){
        sort(all(s));
        reverse(all(s));
    }
    for(int i=0;i<len && t>0;){
        while(s[i]==0)
            ++i;
        int index=i%k;
        char temp=s[index];
        s[index]=s[i];
        s[i]=temp;
        t-=(int)(i/k);
        ++i;
    }

    cout<<s;
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
        solve();
return 0;
}
