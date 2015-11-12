//JULKa solution, SPOJ.
//Till 10^100(1 with 100 zeros) - numbers taken in as array of chars
//Answer - (total+diff)/2 and (total-diff)/2

#include<stdio.h>
#include<string.h>

#define MAX 111

char temp[MAX],total[MAX],diff[MAX],kl[MAX],na[MAX];

void calc()
{
    int len1=strlen(total);             //length of total string
    int len2=strlen(diff);              //length of diff string
    int a,b,c,k,i,j,f;

    //Adding the total and the difference values!
    for( i=len1-1,j=len2-1, k=c=0;i>=0 || j>=0 || c;i--,j--,k++)
    {
        a=i>=0?total[i]-'0':0;          //Units place of the total string - '0' ie; ASCII value of the number minus ASCII of 0(48);
        b=j>=0?diff[j]-'0':0;           //Units place of the diff string - '0' ie; ASCII value of the number minus ASCII of 0(48);
        temp[k]=(a+b+c)%10 + '0';       //Temp stores the number after addition, char by char!
        c=(a+b+c)/10;                   //c represents the carry
    }
    temp[k]=0;                          //Last index is set to '\0'

    strcpy(kl,"0");

    //To divide by two
    for(i=k-1,j=a=f=0;i>=0;i--)
    {
        b=(a*10 + temp[i]-'0')/2;           //take the nth unit's number and if it is divisible 2, carry on, or else, a is set to 1
        a=(a*10 + temp[i]-'0')%2;           //and int he next iteration, 10 is added to the rightside number, as in the case of an actual dividion by two.
        if(b)
            f=1;                          //if b is not eqaul tozero, the quotient is stored in temp!
        if(f)
            kl[j++] = b+ '0';
    }
    if(!j)
        j++;
    kl[j]=0;

    //subtration of total and diff
    for(i=len1-1,j=len2-1,k=c=0;i>=0;i--,j--,k++)
    {
        a=total[i]-'0';
        b=j>=0?diff[j]-'0':0;
        if(a < b+c)
        {
            temp[k]=(10+a-b-c)+'0';
            c=1;
        }
        else
        {
            temp[k]=(a-b-c)+'0';
            c=0;
        }
    }
    temp[k]=0;

    strcpy(na,"0");

    //Dividing by two
    for(i=k-1,a=j=f=0;i>=0;i--)
    {
        b=(a*10 + temp[i]-'0')/2;
        a=(a*10 + temp[i]-'0')%2;
        if(b)
            f=1;
        if(f)
            na[j++]=b+'0';
    }
    if(!j)
        j++;
    na[j]=0;

}//calc()

int main()
{
    int r=10;//10 times
    while(r>0)
    {
        scanf("%s%s",total,diff);
        calc();
       printf("%s\n%s\n",kl,na);
       r--;
    }
    return 0;
}
