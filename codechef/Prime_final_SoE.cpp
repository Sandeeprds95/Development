/* -Sandeep Ravindra
        Generating prime numbers within a range of 1<=a<=b<=10^9 using SoE
*/

#include<iostream>
#include<cstring>  //For memset(array_name, value_to_be_stored, Size);
using namespace std;
int p[10000],tab[32000]={0}, r[100001];
int main()
{
    int l=0,t,a,b,k;
    for(int i=2;i<32000;i++)
    {
        if(tab[i]==0)
        {
            p[l++]=i;                       //Storing all the prime numbers in p[]
            for(int j=i*i;j<32000;j+=i)     //Initialising the multiples of prime numbers to 1.
                tab[j]=1;
        }
    }

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        memset(&r,0,sizeof(r));
        l=0;
        while(p[l]*p[l]<=b)             //If p^2>b then, the multiples are already initialised to 1.
        {
            k=a/p[l]*p[l];              //Removing the multiples of the prime numbers within the range a-b.
            if(k<a)
                k+=p[l];                //setting the right location of k. ie; k>a
            if(k==p[l])
                k*=k;
            for(int i=k;i<=b;i+=p[l])   //Initialising all the composite values to 1. Prime numbers will be 0.
                 r[i-a]=1;
            l++;
        }
        for(int i=a;i<=b;i++)
            if(r[i-a]==0 && i>1)        //Displaying the prime numbers
                cout<<i<<endl;
        cout<<endl;
    }
    return 0;
}
