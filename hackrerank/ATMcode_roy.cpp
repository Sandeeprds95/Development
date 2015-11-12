#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int LCM(int a,int b)
{
    return (a*b)/GCD(a,b);
}

int main()
{
    int n,t,m,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[m];
        for(int i=0;i<m;i++)
            cin>>a[i];
        c=1;
        for(int i=0;i<m;i++)
           c=LCM(c,a[i]);

        cout<<n/c<<endl;
    }
    return 0;
}
