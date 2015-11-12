#include<iostream>
using namespace std;

#define MAX 111

char temp[MAX],total[MAX],diff[MAX],kl[MAX],na[MAX];

int calc(total[MAX],diff[MAX])
{
    int len1=strlen(total);
    int len2=strlen(diff);
    int a,b,c,k;
    for(int i=len1-1,j=len2-1, k=c=0;i>=0 || j>=0 || c!=0;i--,j--,k++)
    {
        a=i>=0?total[i]-'0':'0';
        b=j>=0?diff[i]-'0':'0';
        temp[k]=(a+b+c)%10;
        c=(a+b+c)/10;
    }
}

int main()
{
    while((cin>>total>>diff)==2)
    {
        calc(total,diff);
        cout<<kl<<endl<<na<<endl;
    }
    return 0;
}
