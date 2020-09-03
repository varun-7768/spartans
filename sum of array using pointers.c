#include <stdio.h>
int main()
{

	int arr[3]={1,2,6};
	int sum=0,i;
	int *ptr[3];
	for(i=0;i<3;i++)
	{
		ptr[i]=&arr[i];
	    sum=sum + *ptr[i];	
	}
	printf("%d", sum);




}
