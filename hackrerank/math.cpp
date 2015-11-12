#include<iostream>
using namespace std;
int main()
{
    int n,t,k;
    int a[n];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            a[i]=i;
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    return 0;
}
