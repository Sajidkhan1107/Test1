//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include <stdio.h>

int main()
{
    int a[5], i;
    int *p;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    p = &a[4];  

    printf("\nArray in Reverse Order:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p--;
    }

return 0;
}