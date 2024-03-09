#include<stdio.h>
int main()
{
    int n, a=0; 
    int b=1;
    int c=0;
    printf("ENTER THE NUMBER HOW LONG SERIES YOU WANT :: ");
    scanf("%d",&n);
    printf("THE FIBONACCI SERIES UP TO %d NUMBERS :: ",n);
    for(int i=0 ; i<n ; i++)
    {
        c = a + b;
        printf("%d, ",c);
        a = b;
        b = c;
    }
}

