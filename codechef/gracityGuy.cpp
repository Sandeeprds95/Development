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

string s,p;
bool flag=true;
int len,ans;

int findHop(string x,string y){
    if(x[0]=='#')
        return INT_MAX;
    else{
        ans=0;
        int i=0;
        while(i<len-1){
            while(x[i]=='.')
                ++i;
            if(i>=len)
                break;
            ans++;
            if(y[i]!='.')
                --i;
            while(y[i]=='.')
                ++i;
            if(i>=len)
                break;
            ans++;
            if(x[i]!='.')
                --i;
        }
        return ans;
    }
}

void solve(){
    flag=true;
    cin>>s>>p;
    len=s.size();
    for(int i=0;i<len;++i){
        if(s[i]==p[i] && s[i]=='#'){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Yes\n"<<min(findHop(s,p),findHop(p,s));
    }
    else{
        cout<<"No";
    }
    pbl
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
    TEST
        solve();
return 0;
}
