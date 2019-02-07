#include <stdio.h>
#include<conio.h>
void main()
{
    long n;
    int c=0;

    printf("Enter the integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
    c=c+1;
    }

    printf("%d\n", c);
    getch();
}
