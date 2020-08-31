#include <stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d /n", &n);
printf("enter the digit");
scanf("%d /n", &i);
if(n&(1<<(i-1))==0)
printf("set");
else
printf("not set");
return 0;
}
