#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,sum,rem,i,j,cpy,c=0,n;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0,rem=0,i=1,cpy=n;
         do
    {
        rem=n%2;
        sum=sum + (i*rem);
        n=n/2;
        i=i*10;
    }while(n>0);
        for(j=0;sum>0;j++)
            {
            if((sum%10)==1)
            c++;
                sum=sum/10;

        }


    }
    if((c%2)==0)
        cout<<"The other player ";
        else
        cout<<"Shaka ";
    return 0;
}
