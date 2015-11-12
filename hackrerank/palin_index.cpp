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

string s;
bool flag=false;

void solve(){
    cin>>s;
    int len=s.size();
    flag=false;
    for(int i=0,j=len-1;i<j;++i,--j){
        if(s[i]!=s[j]){
            flag=true;
            break;
        }
    }
    if(flag){
        for(int i=0,j=len-1;i<j;++i,--j){
            if(s[i]!=s[j]){
                int x=i+1,y=j;
                int pos=i;
                for(;x<y;++x,--y){
                    if(s[x]!=s[y]){
                        break;
                    }
                }
                if(x>=y){
                    cout<<i<<endl;
                    break;
                }
                cout<<j<<endl;
                break;
            }
        }
    }
    else{
        cout<<"-1\n";
    }
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
