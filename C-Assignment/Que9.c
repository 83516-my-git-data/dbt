#include<stdio.h>
void binary(int n) 
{
    if (n > 1)
        binary(n / 2);

    printf("%d", n % 2);
}

void octal(int n) 
{
    if (n == 0)
        return;
    octal(n / 8);
    printf("%d", n % 8);
}

void hexadecimal(int n) 
{
    if (n == 0)
        return;
    hexadecimal(n / 16);
    int rem = n % 16;
    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", 'A' + rem - 10);
}
int main()
{
    int n;
    printf("ENTER THE INTEGER NUMBER : ");
    scanf("%d",&n);
    printf("Binary Formate :: ");
    binary(n);
    printf("\nOctal Formate :: ");
    octal(n);
    printf("\nHexadecimal Formate :: ");
    hexadecimal(n);
    return 0;
} 