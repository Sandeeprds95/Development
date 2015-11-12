#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		((a)>(b)?(a):(b))
#define     min(a,b)		((a)<(b)?(a):(b))

int main()
{
    int t,f=1;
    s(t);
    string s;
    while(t--)
    {
        cin>>s;
        int len=s.size(),i,a,b,j;
        for(i=0;i<len/2;i++)
        {
            j=len-1-i;
            if(s[i]!=s[j])
            {
                f=0;break;
            }
        }
        if(f)
            printf("YES\n");
        else
        {
            for(a=i+1,b=j;a<b;a++,b--)
                if(s[a]!=s[b])
                    break;
            if(a>=b)
                printf("YES\n");
            else
            {
                for(a=i,b=j-1;a<b;a++,b--)
                    if(s[a]!=s[b])
                        break;
            if(a>=b)
                printf("YES\n");

            else
                printf("NO\n");
            }
        }//else
    }//test cases
    return 0;
}
