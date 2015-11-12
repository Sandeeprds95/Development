#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string w,s;
    while(t--)
    {
        cin>>w;
        s=w;
        for(int i=0;i<w.size();i++)
        {
            rotate(w.begin(),w.begin()+1,w.end());
            if(s<w)
                s=w;
        }
        cout<<s<<endl;
    }
    return 0;
}
