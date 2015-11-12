#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,c=0,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    k=a[0];
    while(a[0]!=1001)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]!=1001)
            {
                a[i]-=k;
                c++;
            }
            if(!a[i])
                a[i]=1001;
        }
        cout<<c<<endl;
        c=0;
        sort(a,a+n);
        k=a[0];
    }
    return 0;
}
