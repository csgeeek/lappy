#include<stdio.h>
int main()
{
    int a[20][20],n,i,j,count=0,counter=0,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i][j]==0)
            {
              continue;
            }
            else
            {
              count++;
              break;
            }
        }
    }
    if(count==0)
    {
        printf("upper");
    }
    for(k=0;k<n;k++)
    {
        for(l=k+1;l<n;l++)
        {
            if(a[k][l]==0)
            {
                continue;
            }
            else
            {
              counter++;
              break;
            }
        }
    }
    if(counter==0)
    {
    printf("lower");
    }
    if(count!=0&&counter!=0)
    {
        printf("none");
    }
  return 0;
}