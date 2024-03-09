#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE CHARACTER :: ");
    scanf("%d",&n);
    if(65<=n && n<=90)
        printf("UPPERCASE :: %c",n);
    else if(97<=n && n<=122)
        printf("LOWERCASE :: %c",n);
    else if(48<=n && n<=57)
        printf("NUMERICAL DIGIT :: %c",n);
    else
    {
        printf("SPECIAL SYMBOL :: %c",n);
    }
    return 0;
}