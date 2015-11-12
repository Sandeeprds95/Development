#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int p,n,a[9]={};
    cin>>p;
    while(p--)
    {
        cin>>a[0];
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')
                a[1]++;
            if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')
                a[2]++;
            if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')
                a[3]++;
            if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')
                a[4]++;
            if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')
                a[5]++;
            if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')
                a[6]++;
            if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')
                a[7]++;
            if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='H')
                a[8]++;
        }
        cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << " " << a[6] << " " << a[7] << " " << a[8] << endl;
        for(int i=0;i<9;i++)
            a[i]=0;
    }
    return 0;
}
