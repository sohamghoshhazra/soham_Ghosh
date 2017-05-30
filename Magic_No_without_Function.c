//**** Find Magic Number using C Program ****//

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0,temp1,temp2,c,rev=0;
printf("Enter the no:");
scanf("%d",&a);
temp1=a;
while(a>0)
{
b=a%10;
a=a/10;
sum=sum+b;
}
//printf("Sum Of All Digits Of The No= %d\n",sum);
a=sum;
temp2=a;
while(a>0)
{
b=a%10;
a=a/10;
rev=rev*10+b;
}
c=temp2*rev;
if (c==temp1)
    printf("Given no is Magic No");
else
printf("Given no is Not Magic No");
}
