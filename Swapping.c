//**** Swapping Without Using Third Variable ****//


#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter the value of a= ");
scanf("%d",&a);
printf("Enter the value of b= ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping a=%d b=%d",a,b);
}
