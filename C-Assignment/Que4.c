#include<stdio.h>
int marks()
{
    int n;
    printf("\nENTER MARKS : ");
    scanf("%d",&n);
    return n;
}

void grade(int tm)
{
    printf("\n TOTAL MARKS = %d",tm);
    
        if(tm >= 90)
        {
            printf("\nGrade : 'EX' ");
        }
        else if(tm >= 80)
        {
            printf("\nGrade : 'A' ");
        }
        else if(tm >= 70)
        {
            printf("\nGrade : 'B' ");
        }
        else if(tm >= 60)
        {
            printf("\nGrade : 'C' ");
        }
        else if(tm < 60)
        {
            printf("\nGrade : 'F' ");
        } 
}

int main()
{
    int total = 0; 
    printf("ENTER YOUR MARKS OF FIVE SUBJECTS ");
    int a = marks();
    int b = marks();
    int c = marks();
    int d = marks();
    int e = marks();
    printf("\n %d %d %d %d %d ",a,b,c,d,e);
    if(a<=20 && b<=20 && c<=20 && d<=20 && e<=20)
    {
        total = a+b+c+d+e;
        printf("\n %d",total);
        grade(total);
    }
    else
    {
        printf("\nTHE MARKS OF EACH SUBJECT IS UPTO 20, PLEASE CHECK YOUR MARKS...");
    }
    return 0;
}
