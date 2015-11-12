#include<iostream>
using namespace std;
int main()
{
    int n,sum,c;
    cin>>n;
    while(n!=-1)
    {
        int NumOfCandies[n];
        sum=0,c=0;
        for(int i=0;i<n;i++)
            cin>>NumOfCandies[i],sum+=NumOfCandies[i];
        if(sum%n==0)
        {
            for(int i=0;i<n;i++)
            {
                if(NumOfCandies[i]<(sum/n))
                    c+=(sum/n)-NumOfCandies[i];
            }
            cout<<c<<endl;
        }
        else
            cout<<"-1"<<endl;
        cin>>n;
    }
    return 0;
}
