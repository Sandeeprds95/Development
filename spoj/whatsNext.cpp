#include<iostream>
using namespace std;
int main()
{
    int a[3],k=-3;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            k++;
    }
    while(k)
    {
        k=-3;
        if((a[1]-a[0])==(a[2]-a[1]))
            cout<<"AP "<<(a[2]-a[1])+a[2]<<endl;
        else
            cout<<"GP "<<(a[2]/a[1])*a[2]<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                k++;
        }
    }
    return 0;
}
