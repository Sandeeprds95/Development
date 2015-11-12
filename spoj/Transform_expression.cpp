#include<iostream>
#include<stack>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    stack<char> s;
    while(t--)
    {
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(isalpha(str[i]))
                cout<<str[i];
            else if(str[i]==')')
            {
                cout<<s.top();
                s.pop();
            }
            else if(str[i]!='(')
                s.push(str[i]);
        }
        cout<<endl;
    }
    return 0;
}
