#include<stdio.h>
void fact(int p);
void accept();
int n;

int main(void)
{
    accept();
    fact(n);
    return 0;
}

void accept()
{
    printf("ENTER THE NUMBER :: ");
    scanf("%d",&n);
}

void fact(int p)
{
    int res=1;
    for(int i=1 ; i<=p ; i++)
    {
        res = res * i;
    }
    printf("THE FACTORIAL OF NUMBER %d = %d ",p,res);
}
