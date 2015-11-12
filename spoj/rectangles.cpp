#include<iostream>
using namespace std;
int main()
{
    int n,sum,j=2;
    cin>>n;
    sum=n;
    for(int i=2;i*i<=n+1;i++)
        for(int j=i;j*i<n+1;j++)
            sum+=1;
    cout<<sum;
return 0;
}
