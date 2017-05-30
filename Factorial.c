//**** Factorial Of any Number *****//


#include<stdio.h>
#include<conio.h>
void main()
{
    int fact=1,n,i;
    printf("Enter The value=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    printf("factorial of %d = %d\n",n,fact);
    getch();
}
