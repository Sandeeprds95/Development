#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long a,b,k,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(float i=a;i<=b;i++)
        {
            k=sqrt(i);
            if(((sqrt(i))-k)==0.00)
                c++;
        }
        cout<<c<<endl;
        c=0;
    }
   return 0;
}
