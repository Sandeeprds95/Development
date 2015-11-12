#include<iostream>
using namespace std;

int n,c=0;

void counting(long a[])
{
    for(int i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            if(a[i]>15)
            {
                int t=a[i]%10;
                while(t>0)
                {
                    if(t%2==1)
                        c++;
                    t=t>>1;
                }
                a[i]/=10;
            }//if

            if(a[i]<16)
            {
                while(a[i]>0)
                {
                    if(a[i]%2==1)
                        c++;
                    a[i]=a[i]>>1;
                }
            }//else
        }//while
    }//for
    if(c%2)
        cout<<"Shaka :)";
    else
        cout<<"The other player :(";
}
int main()
{
   cin>>n;
   long a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   counting(a);
    return 0;
}
