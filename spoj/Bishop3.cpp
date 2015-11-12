#include<iostream>
#include<cstdio>
using namespace std;

#define     s(n)        scanf("%d",&n)
#define     sll(n)        scanf("%lld",&n)

char sum[110],s[110];
int main()
{
    while(scanf("%s",s)>0)
    {
        int j,c=0,len=0,r,i=0;
        while(s[++len]!='\0');
        if(s[0]-'0'==0 && len==1)
            printf("0\n");
        else if(s[0]-'0'==1 && len==1)
            printf("1\n");
        else if(len<2)
            printf("%d\n",2*(s[0]-'0')-2);
        else
        {
            for(j=len-1;j>=0;j--)
            {
                r=((s[j]-'0')*2);
                sum[i]=(r%10+c)+'0';
              //  printf("sum[%d]: %c\n",i,sum[i]);
                c=r/10;
                i++;
            }
            //puts(sum);
            //printf("c: %d\n",c);
            if(c)
                sum[i]=c+'0',s[i+1]='\0',j=len;
            else
                j=len-1,s[i]='\0';
          //  puts(sum);
            for(int i=0;i<=j/2;i++)
            {
                int temp=sum[i];
                sum[i]=sum[j-i];
                sum[j-i]=temp;
            }
        //puts(sum);
        //printf("j: %d\n",j);
        int k=j;
            if((sum[j]-'0')<2)
            {
                sum[j]=(10+(sum[j]-'0')-2)+'0';

                for(;sum[--j]=='0';sum[j]='9');

                sum[j]=((sum[j]-'0')-1)+'0';
            }

            else
                sum[j]=((sum[j]-'0')-2)+'0';

                if(sum[0]=='0')
                    for(int i=1;i<k+1;i++)
                        printf("%c",sum[i]);
                else
                    for(int i=0;i<k+1;i++)
                        printf("%c",sum[i]);
            printf("\n");
        }
    }
    return 0;
}


