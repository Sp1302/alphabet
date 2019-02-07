# alphabet
#include<stdio.h>
void main()
{
char c;
printf("Enter a character:");
scanf("%d",&c);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
printf("Alphabet\n");
}
else
{
printf("not an alphabet\n");
}
getch();
}
