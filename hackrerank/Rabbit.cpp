#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sum=0,n,cntr=2,j=2,t=0,tst;
    cin>>tst ;
    while(tst--)
    {
     cin>>n;
     sum=0;
    while(sum<n)
    {
        sum=((j*(j+1))/2)-1;
        if(sum>=n)
            {
                t=(((j*(j+1))/2)-1)-(((j*(j-1))/2)-1);
                break;
            }
        j++;
    }
    cout<<t-1<<endl;
    }
    return 0;
}
