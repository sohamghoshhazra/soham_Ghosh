//**** Fibonacci Series *****//


#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=0,b=1,next;
    printf("Enter The Range=");
    scanf("%d",&n);
    printf("%d  %d",a,b);
    for(i=2;i<=n;i++)
    {
        next=a+b;
        a=b;
        b=next;
        printf("  %d  ",next);
}
}
