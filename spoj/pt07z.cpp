/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Longest path in a tree
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

#define MAX     10000

bool visited[MAX + 1];
vector <int> tree[MAX + 1];
int maxWt[MAX + 1];

void bfs(int x)
{
    queue<pii> q;
    q.push(MP(x,0));
    while(!q.empty())
    {
        int root = q.front().F;
        int wt = q.front().S;
        visited[root] = true;
        fr(i,0,tree[root].size())
        {
            if(visited[tree[root][i]] == false)
            {
                q.push(MP(tree[root][i],wt+1));
            }
        }
        maxWt[root] = wt;
        q.pop();
    }
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    int n,maxRoot;
    s(n);
    fr(i,0,n-1)
    {
        int u,v;
        s(u),s(v);
        tree[u].PB(v);
        tree[v].PB(u);
    }
    bfs(1);
    maxRoot = 0;
    fr(i,1,n+1)
        maxRoot = maxWt[maxRoot] < maxWt[i] ? i : maxRoot;

    memset(maxWt,0,sizeof(maxWt));
    memset(visited,0,sizeof(visited));

    bfs(maxRoot);

    maxRoot = 0;
    fr(i,1,n+1)
        maxRoot = max(maxRoot,maxWt[i]);

    p(maxRoot),pbl();

return 0;
}
