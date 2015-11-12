/*
	Author   : Sandeep Ravindra
	Contest  : Pracitce
	Problem  : Even - tree
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

#define     fr(i,a,b)	    for(ll i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl	     printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

vi tree[101];
bool visited[100] = {false};
int ans = 0;

int dfs(int x)
{
    visited[x] = true;
    int num_vertex = 0;
    int len = tree[x].size();
    for(int i=0; i < len; i++)
    {
        if(visited[tree[x][i]] == false)
        {
            int num_node = dfs(tree[x][i]);
            if(num_node%2 == 0)
                ans++;
            else
                num_vertex+=num_node;
        }
    }
    return num_vertex + 1;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    int n,m;
    s(n),s(m);
    fr(i,0,m)
    {
        int x,y;
        s(x),s(y);
        tree[x-1].PB(y-1);
        tree[y-1].PB(x-1);
    }
    fr(i,0,n)
    {
        if(visited[i])
            continue;
        dfs(i);
    }
    p(ans);
return 0;
}
