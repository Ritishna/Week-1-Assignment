#include<stdio.h>
#include<conio.h>
void main()
{
    int n,d,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        d=n%10;
        s=s+d;
        n=n/10;
    } 
    while (n!=0);
    printf("sum of didgits=%d", &s);
    getch();
    return 0;
}