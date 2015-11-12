/*
    Author   : Sandeep Ravindra
    Contest  : COOK60
    Problem  : KNODES
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>
#include<list>

using namespace std;

#define     ll              long long int
#define     D               double
#define     LD              long double

#define     s(n)        scanf("%d",&n);
#define     ss(n)       scanf("%s",n);
#define     sc(n)       scanf("%c",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%I64d",&n);

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

typedef     pair<double,ll> pii;

void solve(){
    string s;
    int ans=0;
    cin>>s;
    map<string,int> mp;
    int n=s.length();
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            string w=s.substr(i,j-i+1);
            sort(all(w));
            ans+=mp[w];
            ++mp[w];
        }
    }
    cout<<ans<<endl;
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
//        freopen("in.txt","r",stdin);
    #endif
    TEST
        solve();
return 0;
}

