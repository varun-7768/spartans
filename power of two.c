#include<stdio.h>
void main()
{
int n;
printf("enter");
scanf("%d \n", &n);
if((n&(n-1))==0)
printf("power of 2");
else
printf("not");
}
