//*** Palindrome Number Using C ***//


#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp,rev=0;
    printf("Enter a Number= ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {

        b=a%10;
        a=a/10;
        rev=(rev*10)+b;
    }
    if(rev==temp)
    {
        printf("\n%d is a Palindrome Number\n", temp);
    }
    else
    {
        printf("\n%d is not a Palindrome Number\n", temp);
    }
getch();
}
