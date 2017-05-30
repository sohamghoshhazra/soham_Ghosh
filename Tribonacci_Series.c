//**** Tribonacci Series *****//


#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=0,b=1,c=1,next;
    printf("Enter The Range=");
    scanf("%d",&n);
    printf("%d  %d  %d ",a,b,c);
    for(i=3;i<n;i++)
    {
        next=a+b+c;
        a=b;
        b=c;
        c=next;
        printf("  %d  ",next);
}
getch();
}
