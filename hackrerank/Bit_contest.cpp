#include<iostream>
using namespace std;

int n,c=0;

void counting(long long a[])
{
    for(int i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            if(a[i]%2==1)
                c++;
            a[i]=a[i]>>1;
        }
    }
    if(c%2)
        cout<<"Shaka :)";
    else
        cout<<"The other player :(";
}
int main()
{
   cin>>n;
   long long a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   counting(a);
    return 0;
}
