/*
    Author   : Sandeep Ravindra
    Contest  : CODECHEF LONG OCT15
    Problem  : TIMEASR
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
#define     sd(n)       scanf("%lf",&n);
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

typedef     pair<ll,ll> pii;

double angleDiff[1000];

void computeAngleDiff() {
    for(int x=0;x<720;x++) {
		double temp = fabs(11*(x%60)-60*(x/60))/2;
		if(temp >= 180)
            angleDiff[x] = 360-temp;
		else
            angleDiff[x] = temp;
	}
}

void solve(){
    double input;
    cin>>input;
    double hour,minute;
    for(int x=0;x<720;++x) {
        if((double)fabs(angleDiff[(int)x]-input) <= 0.00834 || ((double)(360-angleDiff[(int)x]-input) <= 0.00834)) {
            hour = (int)(x/60);
            minute = (int)x%60;
            if(hour<10 && minute<10)
                cout<<"0"<<hour<<":"<<"0"<<minute<<endl;
            else if(hour<10 && minute>=10)
                cout<<"0"<<hour<<":"<<minute<<endl;
            else if(hour>=10 && minute<10)
                cout<<hour<<":"<<"0"<<minute<<endl;
            else
                cout<<hour<<":"<<minute<<endl;
        }
    }
}

//Driver program
int main(){
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
    computeAngleDiff();
    TEST
        solve();
return 0;
}
