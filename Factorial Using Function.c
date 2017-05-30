//*** Factorial of any number using function ***//



#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
    int n,f;
    printf("Enter The value=");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of %d = %d\n",n,f);
    }
    int factorial(int n)
    {
        int i,fact=1;
       for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    return fact;
}
