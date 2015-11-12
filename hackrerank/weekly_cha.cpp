#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,c;
    cin>>t;
    while(t--)
    {
        char a[100000];
        cin>>a;
        c=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]==a[i+1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
