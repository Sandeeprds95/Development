#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,avg,c;
    cin>>t;
    while(t--)
    {
        avg=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            avg+=a[i];
        }
        avg=avg/n;
        sort(a,a+n);
        for(int i=0;i<n;i++)
            if(a[i]>avg)
                c++;
        cout<<c<<endl;
    }
    return 0;
}
