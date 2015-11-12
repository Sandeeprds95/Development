#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[200]={1},temp=0,m=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            for(int i=0;i<=m;i++)
            {
                a[i]=a[i]*j+temp;
                temp=a[i]/10;
                a[i]=a[i]%10;
            }
            while(temp)
            {
                m++;
                a[m]=temp%10;
                temp/=10;
            }
        }
            for(int i=m;i>=0;i--)
                cout<<a[i];
            cout<<endl;
    }
    return 0;
}
