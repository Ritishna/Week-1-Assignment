#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if(a>0)
    printf("%d is a positive number", &a);
    else if(a<0)
    printf("%d is a negative number", &a);
    else
    {
        prinntf("zero");

    }
    getch()
    return 0;
}