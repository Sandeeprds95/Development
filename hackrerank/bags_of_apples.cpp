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

int n;
int a[123456];
ll sum=0;

void solve(){
    s(n)
    for(int i=0;i<n;++i){
        s(a[i])
        sum+=a[i];
    }
    sort(a,a+n);
    if(sum%3 == 0)
        cout<<sum;
    else{
        for(int i=0;i<n;++i){
            sum-=a[i];
            if(sum%3 == 0){
                if(sum!=0)
                    cout<<sum;
                else{
                    bool flag = false;
                    int ans=0;
                    for(int i=n-1;i>=0;--i){
                        if(a[i]%3==0){
                            flag=true;
                            ans+=a[i];
                        }
                    }
                if(flag == false)
                    cout<<"0";
                else
                    cout<<ans;
                }
                break;
            }
        }
    }
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
        solve();
return 0;
}
