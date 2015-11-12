/* -Sandeep Ravindra
        The Next Palindrome
*/
#include <vector>
#include <string>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int T,a,b;
    cin>>T;
    while(T--)
    {
        string ss, s;
        int flag=0;
        cin>>ss;
        for(int i=0,j=ss.size()-1;i<=ss.size()/2;i++,j--)
        {
            if(ss[i]!=ss[j])
            {
                flag=1;break;
            }
        }
        if(flag==1)
        {
        s = ss;
        int inc, dec;
        inc = s.size()/2;
        dec = inc;
        if(s.size()%2==0)
            dec--;
        for(int i=inc,j=dec;i<s.size() && j>=0;i++,j--)
            s[i]=s[j];
        while(s.size()<=ss.size() && s<=ss && ss.size()>1)
        {
            int i=dec, j=inc;
            while((s[i]-'0')==9 && i>=0 && j<s.size())
            {
                s[i] = s[j] = '0';
                i--;
                j++;

            }
            if(i<0)
            {
                s = "1"+s;
                int l = s[s.size()-1]-'0';
                l++;
                s[s.size()-1] = (l+'0');
            }
            else
            {
                int l = s[i]-'0';
                l++;
                s[i]=s[j]=(l+'0');
            }
        }
        a=b=0;
        if(ss.size()>1)
        {
            for(int i=0;i<ss.size();i++)
                a=a*10+(ss[i]-'0');
            for(int i=0;i<s.size();i++)
            b=b*10+(s[i]-'0');
              cout<<abs(a-b)<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        }//if(flag==1)
        else
            cout<<"0"<<endl;
    }
}

