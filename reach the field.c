#include <stdio.h>

int main()
{
    int a[9]={1,2,3,1,2,4,5,3,2};
    int i,sum=0,count=0;
    for(i=0;i<9;i++)
    {
      sum=sum+a[i];
        if(sum>5)
        {
         count++;
         sum=0;
         i--;
        }
        else if(sum==5)
        {
         count++;
         sum=0;
        }
        else
        {
         continue;
        }
    }
  printf("%d",count);
}
