#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

#define s(n)        scanf("%d",&t)
#define mod         10

unsigned long long exp(int a,unsigned long long e)
{
    unsigned long long result = 1;
    while(e>0)
    {
        if(e%2)
            result=((result%mod)*(a%mod))%mod;
        e=e>>1;
        a=((a%mod)*(a%mod))%mod;
    }
    return result;
}

int main()
{
    int t,len;
    char s[1005];
    unsigned long long e,res;
    for(s(t);t>0;t--)
    {
        cin>>s;
        cin>>e;
        len=strlen(s);
        if(s[len-1]!='0')
        {
            res=exp(s[len-1]-'0',e);
            cout<<res%10<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
