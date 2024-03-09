#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

int compareNames(const void *a, const void *b) 
{
    return strcmp((const char *)a, (const char *)b);
}

int main() 
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents;
    
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    getchar(); 
 
    printf("Enter the names of students:\n");
    for (int i = 0; i < numStudents; i++) 
    {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }

    qsort(nameOfStudents, numStudents, MAX_NAME_LENGTH * sizeof(char), compareNames);

    printf("\nSorted Names of Students:\n");
    for (int i = 0; i < numStudents; i++) 
    {
        printf("%d. %s\n", i + 1, nameOfStudents[i]);
    }

    return 0;
}
