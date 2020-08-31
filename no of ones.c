#include<stdio.h>
int main()
{
int n;
int count=0;
printf("enter the number");
scanf("%d", &n);
while(n)
{
n=n&(n-1);
count++;
}
return count;
}
