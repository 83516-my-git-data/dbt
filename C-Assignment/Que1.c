// #include<stdio.h>
// int main(int argc, char *argv[])
// {   
//     int i; 
//     for(i = 0 ; i < argc ; i++)
//         puts(argv[i]); 
//     return 0;
// }

#include <stdio.h>
int main() 
{
    int i,a;
    float num,max;

    printf("Enter the number of elements: ");
    scanf("%d", &a);

    printf("Enter number 1: ");
    scanf("%f", &max);

    for (i = 2; i <= a; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max) 
        {
            max = num;
        }
    }
    printf("The maximum number is: %.2f\n", max);
    return 0;
}