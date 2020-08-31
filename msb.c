#include<stdio.h>
int main()
{
int i,n;
printf("enter the number");
scanf("%d", &n);
while(n)
{
i=n;
n=n&(n-1);
}
printf("%d", i);
return 0;
}
