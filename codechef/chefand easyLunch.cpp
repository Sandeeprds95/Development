#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
long p[1000],tab[1000005];
int main()
{
	int t,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        long a[n],c=0,pc=0;//,sum=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        memset(tab,0,sizeof(tab));
        //sort(a,a+n,greater<int>());
       //  for(int i=0;i<n;i+=2)
         //   sum+=a[i];
         //cout<<sum<<endl;
         tab[0]=tab[1]=1;
         for(long i=2;i<1000;i++)
         {
             if(tab[i]==0)
             {
                 p[i-2]=i;
                 for(long j=i*i;j<1000001;j+=i)
                    tab[j]=1;
             }
         }
        // for(int i=0;i<1000;i++)
           // cout<<p[0]<<" "<<p[1];

        // for(int i=0;i<n;i++)
         //{
           //  if(a[i]!=1)
            // {
                 for(int r=0;r<1000;r++)
                 {

                    if(p[r])
                    {
                        //cout<<p[r]<<" ";
                        for(int j=0;j<n;j++)
                        {
                            c=0;//cout<<a[j]<<" ";
                            if(a[j]!=1)
                            {
                                while(a[j]%p[r]==0)
                                {
                                    //if(a[j]%p[r]==0)
                                    //cout<<a[j]<<" ";
                                        a[j]/=p[r];
                                        //k=1;
                                    //}
                                c++;
                                cout<<"j: "<<j<<" - "<<c<<endl;
                                }
                                if(c>pc)
                                    pc=c;

                            }
                        }
                    }
                 }

           // }
         //}
         cout<<c<<endl;
    }
    return 0;
}
