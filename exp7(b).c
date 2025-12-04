//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],cz[5][5],r,c,i,j;
    printf("Enter number of rows and columns:");
    scanf("%d%d",&r,&c);
    
    printf("Enter elements for first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements:\t");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    
    printf("Enter elements for second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements:\t");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The addition of two matrices is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cz[i][j]=a[i][j]+b[i][j];
            printf("%d\t",cz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
