#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter tne choices:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
         printf("sum=%d", a+b);
         break
        case 2:
         printf("diff=%d", a-b);
         break:
        case 3:
         printf("multify=%d", a*b):
         break;
        case 4:
         printf("div=%d", a/b);
         break;
        default:
         printf("error");
    }
    getch()
    return 0;
}