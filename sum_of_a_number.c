#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter your number : ");
    scanf("%d", &n);
    for(sum = 0; n>0 ; n/10)
    {
        sum = sum + (n%10);
    }
    printf("The sum is: ");
    return 0;
}