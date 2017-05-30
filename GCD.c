//*** GCD Of Two Numbers ***//


#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter The value of a=");
    scanf("%d",&a);
    printf("Enter The value of b=");
    scanf("%d",&b);
    while (b != 0)
    {
    temp = b;
    b = a%b;
    a = temp;
    }
    printf("\nGreatest Common Divisor = %d\n", a);
}
