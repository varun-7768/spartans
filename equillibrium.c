#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	int left,right;
  int a[7]={1,1,5,2,4,3,0};
	
  for(i=0;i<7;i++)
	{
	   left=0;
	   for(j=0;j<i;j++)
     {
	   left=left + a[j];
     }
	   right=0;
	   for(j=i+1;j<7;j++)
     {
	   right=right + a[j];
     }
	   if(left==right)
	   return i;
	}	
return 0;
}
