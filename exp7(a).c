//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>
int main()
{
    int a[50],n,i,max;
    printf("Enter number of terms:");
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("The original array is \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
    printf("\nThe maximum element of array is %d",max);
    
    return 0;
}