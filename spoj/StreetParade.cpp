#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

#define s(n)                scanf("%d",&n)
#define fall(i,a,b)         for(int i=a;i<b;i++)

int main()
{
    int n;
    s(n);
    while(n)
    {
        int *a=new int[n];
        stack<int> s;
        fall(i,0,n)
            s(a[i]);
        int i=0,k=1,f=0;
        fall(i,0,n)
        {
            while(s.empty()==0 && s.top()==k)
            {
                k++;
                s.pop();
            }
            if(a[i]==k)
                k++;
            else if(s.empty()==0 && s.top()<a[i])
            {
                f=1;
                break;
            }
            else
                s.push(a[i]);
        }
        if(f==1)
            printf("no\n");
        else
            printf("yes\n");
        s(n);
    }
    return 0;
}
