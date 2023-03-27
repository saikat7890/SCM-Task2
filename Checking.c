#include<stdio.h>
int main()
{
    char n;
    printf("Enter your charecter: ");
    scanf("%c", &n);

    if((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
        printf("The charecter is an Alphabet.\n");
    else if(n >= '0' && n<= '9')
        printf("This is an Digit.\n");
    else
        printf("This is a special number.");

    return 0;
}