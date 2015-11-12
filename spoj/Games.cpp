#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    return b==0? a: gcd(b,a%b);
}

int main()
{
    int t,f,c,n,p;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        f=c=0,p=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                f=1;
                break;
            }
            else
                c++;
        }
        n=0;
        for(int i=0;i<s.size();i++)
            if(s[i]!='.')
                n=n*10+(s[i]-'0');
        if(f==1)
        {
            for(int i=0;i<c;i++)
                p*=10;
        }
        cout<<p/gcd(p,n)<<endl;
    }
    return 0;
}
