#include<iostream>
using namespace std;

int con(string s)
{
    int r=0;
    for(int i=0;i<s.size();i++)
    {
        if(!isdigit(s[i]))
            return -1;
        else
            r=r*10+(s[i]-'0');
    }
    return r;
}

int main()
{
    int t,a,b,c;
    cin>>t;
    string f,s,th;
    char p,e;
    while(t--)
    {
        cout<<endl;
        cin>>f>>p>>s>>e>>th;
        a=con(f);
        b=con(s);
        c=con(th);
        if(a<0)
            a=c-b;
        if(b<0)
            b=c-a;
        if(c<0)
            c=a+b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
