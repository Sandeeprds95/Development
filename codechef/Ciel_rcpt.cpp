#include<iostream>
#include<tgmath.h>
using namespace std;
int power(int k)
{
    int c=0;
    while(k!=1)
        {
            k=k/2;
            c++;
        }
        return c;
}
int main()
{
    int t,p,k=0,c=0;
    cin>>t;
    while(t--)
    {
        cin>>p;
        k=0;
        while(p)
        {
            c=power(p);
            if(c>11)
            {
                p=p-pow(2,11);
                k++;
            }
            else
            {
                p=p-pow(2,c);
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
