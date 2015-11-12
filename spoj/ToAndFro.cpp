#include<iostream>
using namespace std;
int main()
{
    int n,len,r;
    string s;
    cin>>n;
    while(n)
    {
       cin>>s;
       int k=0;
       r=0;
       len=s.size()/n;
       char sen[len][n];
       for(int i=0;i<len;i++)
       {
           if(r%2==0)
           {
                for(int j=0;j<n;j++)
                {
                    sen[i][j]=s[k];
                    k++;
                }
           }
            else
            {
                for(int j=n-1;j>-1;j--)
                {
                    sen[i][j]=s[k];
                    k++;
                }
            }
            r++;
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<len;j++)
           {
               cout<<sen[j][i];
           }
       }
        cout<<endl;
        cin>>n;
    }
    return 0;
}
