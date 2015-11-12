 #include<iostream>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;

/*int check(string *s,int i)
{
    for(int j=s.size();j>i;j--)
    {
        if(s[j]==')')
        {
            return j;
        }
    }
}*/

int main()
{
    string s;
    int t,len,c=0,pos,l,f=0;
    cin>>t;
    while(t--)
    {
        c++;l=0;
        f=0;
        getline(cin,s);
        len=s.size();
        cout<<len;
        for(int i=0;i<len;i++)
        {
            if((s[i]==':' && s[i+1]!='(') && (s[i]==':' && s[i+1]!=')') )
            {
                f=1;
                break;
            }
            if(isalpha(s[i])==0 && s[i]!=':' && s[i]!=' ')
            {
                if(s[i]=='(' && s[i-1]!=':')
                {
                    l++;
                    //pos=check(s,i);
                    //goto A;
                }
                if(s[i]==')' && s[i-1]!=':')
                    l--;
                else
                    f=1;
            }
            if(s[i]==' ')
                continue;
        }
        if(f==1)
        {
            cout<<"Case #"<<c<<": NO"<<endl;
            l=1;
        }
        else if(l==0)
            cout<<"Case #"<<c<<": YES"<<endl;
    }
    return 0;
}
