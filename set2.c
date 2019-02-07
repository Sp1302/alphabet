#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
int sum;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
printf("%d\n",sum);
}
return 0;
}
