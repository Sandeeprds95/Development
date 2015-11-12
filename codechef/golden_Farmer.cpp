#include <iostream>
using namespace std;
int main()
{
    int slot1,slot2,intTax,t,r=0;
    unsigned int k;
    long long int n,tax[n];
    cin>>t;
    while(t--){
        cin>>intTax,slot1,slot2,k,n;
        tax[r]=intTax;
        while(r<slot1){
            tax[++r]=tax[r-1]+1;
        }
        while(k>slot1 && k<slot2){
            tax[++r]=tax[r-1]*2;
        }
        while(k--){
                n--;
            tax[n]*=tax[--n];
        }
        cout<<tax[n]<<"\n";
    }
    return 0;
}
