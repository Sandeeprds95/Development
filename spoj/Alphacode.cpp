#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

#define     s(n)        scanf("%s",n)
#define     sll(n)      scanf("%lld",&n)

long long dp[5001]={};
int main()
{
    char st[5001];
    s(st);
    while((st[0]-'0'))
    {
        int len=strlen(st);
        dp[0]=dp[1]=1;
        for(int i=2;i<=len;i++)
        {
            dp[i]=0;
            if((st[i-2]-'0')==1 || ((st[i-2]-'0')==2 && (st[i-1]-'0')<7))
                dp[i]+=dp[i-2];
            if((st[i-1]-'0'))
                dp[i]+=dp[i-1];
        }
        printf("%lld\n",dp[len]);
        s(st);
    }
    return 0;
}

