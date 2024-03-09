#include<stdio.h>
#include<stdlib.h>
struct stud
{
    char name[20];
    int rollno ;
    int marks;
};
int main()
{
    struct stud s;
    printf("ENTER THE NAME, ROLL NO, AND MARKS OF STUDENT : \n");
    scanf("%s%d%d",s.name,&s.rollno,&s.marks);

    printf(" Student_Name : %s\n Roll_No : %d\n Marks : %d ",s.name,s.rollno,s.marks);

    return 0;
}