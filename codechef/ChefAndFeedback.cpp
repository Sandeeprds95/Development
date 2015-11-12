#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,f;
    cin>>t;
    while(t--)
    {
        char s[100002];
        cin>>s;
        int len=strlen(s);
        f=0;
        for(int i=0;i<len-2;i++)
        {
            if(s[i] == s[i + 2] && s[i] != s[i + 1])
            {
                f=1;
                break;
            }
        }
        f?cout<<"Good"<<endl:cout<<"Bad"<<endl;
    }
    return 0;
}
