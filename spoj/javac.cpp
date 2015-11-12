/*
    Author   : Sandeep Ravindra
    Contest  : practice
    Problem  : Java Vs c++
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

#define     LL          long long int
#define     D               double
#define     LD              long double

#define     s(n)        scanf("%d",&n);
#define     ss(n)       scanf("%s",n);
#define     sc(n)       scanf("%c",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define	    all(n)          n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

int main()
{
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
       // freopen("in.txt","r",stdin);
    #endif

    char s[102], temp[102];
    while(scanf("%s",s) != EOF)
    {

        int n = strlen(s);
        bool  java = true, cpp = true;
        if(!islower(s[0]))
            java = cpp = false;
        fr(i,1,n)
        {
            if(!isalpha(s[i]))
                java = false;
            if(s[i] == '_')
            {
                if(!islower(s[i+1]))
                        cpp = false;
            }
            else if(!islower(s[i]))
                cpp = false;
        }

        if(java && cpp)
        {
            printf("%s\n",s);
                continue;
        }


        else if(!java && !cpp)
        {
            printf("Error!\n");
            continue;
        }

        if(java)
        {
            printf("%c",s[0]);
            fr(i,1,n)
            {
                if(isupper(s[i]))
                    printf("_%c",tolower(s[i]));
                else
                    printf("%c",s[i]);
            }
            pbl
        }

        else
        {
            temp[0] = s[0];
            int len = 1;
            fr(i,1,n)
            {
                if(islower(s[i]))
                {
                    if(s[i-1] == '_')
                        temp[len] = toupper(s[i]),
                        len++;
                    else
                        temp[len] = s[i],
                        len++;
                }
            }
            fr(i,0,len)
                printf("%c",temp[i]);
            pbl
        }
    }
return 0;
}
