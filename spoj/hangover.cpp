#include<iostream>
using namespace std;
int main()
{
    float n,sum;
    int c;
    cin>>n;
    while(n!=0.00)
    {
        sum=0.00;
        c=0;
        for(float i=2;;i++)
        {
            sum+=(float)(1/i);
            if(sum<n)
                c++;
            else
                break;
        }
        cout<<c+1<<" card(s)"<<endl;
        cin>>n;
    }
    return 0;
}
