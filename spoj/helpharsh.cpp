#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
        int n,sp,k=2;
        cin>>n;
        sp=2*n-2;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<k;j++)
                cout<<j;
            for(int r=sp;r>0;r--)
                cout<<" ";
            for(int s=i;s>0;s--)
                cout<<s;
            cout<<endl;
            k++;sp-=2;
        }
        return 0;
}
