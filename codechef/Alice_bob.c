#include<stdio.h>
int main()
{
    int T,i,j;
    int N[10];
    scanf("%d",&T);
    if(T--)    {
        for(i=1;i)    {
            scanf("%d",&N[i]);
        }
        i=1;
        for(j=1;j        {
            N[j]=N[i];
            i++;
            if(N[j]            {
               if(( (N[j]-1)%4)==0)
                {
                    printf("\nNo");
                }
                else
                {
                    printf("\nYes");
                }
            }
            else
            {
                return 0;
            }
        }
    }
}
