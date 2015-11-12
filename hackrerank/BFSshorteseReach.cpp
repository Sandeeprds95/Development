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

typedef     pair<double,ll> pii;

int n,m;
vector<vi> v;
vector<int> dist;
vector<bool> visited;

void bfs(int x){
    visited[x]=true;
    queue<int> q;
    q.push(x);
    dist[x]=0;
    while(!q.empty()){
        int k=q.front();
        q.pop();
        for(int i=0;i<v[k].size();++i){
            if(v[k][i] && visited[v[k][i]]==false){
                dist[v[k][i]]=dist[k]+1;
                visited[v[k][i]]=true;
                q.push(v[k][i]);
            }
        }
    }
}

void solve(){
    s(n)s(m)
    v=vector<vi>(n+2);
    dist=vector<int> (n+2,-1);
    visited=vector<bool> (n+2);
    int x,y,s;
    for(int i=0;i<m;++i){
        s(x)s(y)
        v[x].PB(y);
        v[y].PB(x);
    }
    s(s)
    bfs(s);
    for(int i=1;i<=n;++i){
        if(dist[i]!=-1 && i != s)
            cout<<dist[i]*6<<" ";
        else if(i!=s)
            cout<<dist[i]<<" ";
    }
    pbl
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
