#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a[2][28]={};
    char b[26],w[100];
    int t,c,r[26];
    cin>>t;
    while(t--)
    {
        c=0;
        for(int i=0;i<28;i++)
            a[1][i]={0};
        r[26]={};
        cin>>b>>w;
        for(int i=0;i<strlen(b);i++)
        {
            a[0][b[i]-'a']++;
            r[i]=b[i]-'a';
        }
        for(int i=0;i<strlen(w);i++)
            a[1][w[i]-'a']++;
        for(int i=0;i<strlen(b);i++)
            if(a[0][r[i]]>0 && a[1][r[i]]>0)
                c++;
        cout<<c<<endl;
    }
    return 0;
}
