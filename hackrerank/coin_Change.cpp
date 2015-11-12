/*
    Author   : Sandeep Ravindra
    Contest  : HR
    Problem  : BFS
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

typedef     pair<int,int> pii;

int n,m;
int arr[12345];

int coin_change(int s[],int m,int n){
//    if(n==0)
//        return 1;
//    if(n<0)
//        return 0;
//    if(m<=0 && n>=1)
//        return 0;
//    return coin_change(s,m-1,n)+coin_change(s,m,n-s[m-1]);
    int table[n+1];
    memset(table,0,sizeof(table));

    table[0]=1;

    for(int i=0;i<m;++i){
        for(int j=s[i];j<=n;++j)
            table[j]+=table[j-s[i]];
    }
    return table[n];
}

void solve(){
    s(n)s(m)
    for(int i=0;i<m;++i){
        s(arr[i])
    }
    cout<<coin_change(arr,m,n);
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
        solve();
return 0;
}
