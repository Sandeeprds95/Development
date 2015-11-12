#include<iostream>
using namespace std;
int main()
{
    int n,sq;
    cin>>n;
    while(n)
    {
        sq=0;
        for(int i=1;i<n+1;i++)
            sq+=i*i;
        cout<<sq<<endl;
        cin>>n;
    }
    return 0;
}
