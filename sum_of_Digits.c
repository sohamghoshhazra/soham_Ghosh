#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0;
printf("Enter the no:");
scanf("%d",&a);
while(a>0)
{
b=a%10;
a=a/10;
sum=sum+b;
}
printf("Sum Of All Digits Of The No= %d\n",sum);
getch();
}
