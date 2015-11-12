#include<iostream>
#include<cstdio>
using namespace std;

#define     s(n)        scanf("%d",&n)
#define     sll(n)        scanf("%lld",&n)

int main()
{
    int t,n,c;
    s(t);
    string s;
    while(t--)
    {
        s(n);
        cin>>s;
        c=0;
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='1')
            {
                s[i-1]=-1;
                while(s[i]=='1' && i<n-1)
                    ++i,s[i-1]=-1;
            s[i]=-1;
            }
        }
        if(s[0]=='1')
            s[0]=s[1]=-1;
        if(s[n-1]=='1')
            s[n-1]=s[n-2]=-1;
        for(int j=0;j<n;j++)
                if(s[j]=='0')
                    c++;
        cout<<c<<endl;
    }
    return 0;
}
