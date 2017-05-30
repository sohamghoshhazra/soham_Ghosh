#include <stdio.h>

int sum_of_digits(int);
int reverse_digits(int);

int main()
{
        int sum, num, reverse;
        printf("\nEnter a Number:\t");
        scanf("%d", &num);
        sum = sum_of_digits(num);
        if(sum < 10)
 {
                if((sum * sum) == num)
 {
                        printf("\n%d is a Magic Integer\n", num);
                }
 else
 {
                        printf("\n%d is Not a Magic Integer\n", num);
                }
                return 0;
        }
        reverse = reverse_digits(sum);
        if((sum * reverse) == num)
 {
                printf("\n%d is a Magic Integer\n", num);
        }
 else
 {
                printf("\n%d is Not a Magic Integer\n", num);
        }
        return 0;
}

int sum_of_digits(int num)
{
 int sum = 0;
        while(num > 0)
 {
                sum = sum + (num % 10);
                num = num / 10;
        }
        return sum;
}

int reverse_digits(int num)
{
        int reverse = 0;
        while(num > 0)
 {
                reverse = (reverse * 10) + (num % 10);
                num = num / 10;
        }
        return reverse;
}
