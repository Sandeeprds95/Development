#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    int tstds,kstds;
    cin>>t;
    while(t--)
    {
        cin>>tstds>>kstds;
        long long m=999999999,a[tstds];
        for(int i=0;i<tstds;i++)
            cin>>a[i];
        sort(a,a+tstds);
        for(int i=0;i<(tstds-kstds+1);i++)
        {
            if((a[i+kstds-1]-a[i])<m)
                m=a[i+kstds-1]-a[i];
        }
        cout<<m<<endl;
    }
    return 0;
}
