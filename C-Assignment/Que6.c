#include<stdio.h>
int main()
{
    int r,c,i,j;

    printf("ENTER THE NUMBER OF ROWS AND COLUMNS :: ");
    scanf("%d%d",&r,&c);

    int arr1[r][c];
    int arr2[r][c];
   
    printf("ENTER THE ELEMENTS OF I'ST MATRIX : \n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("ENTER THE ELEMENTS OF II'ND MATRIX : \n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\nMATRIX I \n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIX II \n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIX MULTIPLICATION :: \n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("%d\t",arr1[i][j] * arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}