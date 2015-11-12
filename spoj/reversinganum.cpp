#include<iostream>
using namespace std;
int reversDigits(int num)
{
  static int rev_num = 0;
  static int base_pos = 1;
  if(num > 0)
  {
    reversDigits(num/10);
    //cout<<num<<"\n";
    rev_num  += (num%10)*base_pos;
    base_pos *= 10;
  }
  return rev_num;
}

/*Driver program to test reversDigits*/
int main()
{
    int n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        x=reversDigits(x)+ reversDigits(y);
        cout<<"Reverse of no. is: "<< reversDigits(x);
    }
        return 0;
}
