//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>
int main()
{
    char a[55];
    int n;
    printf("Enter any string:");
    gets(a);
    
    n=0;
    while(a[n]!='\0')
    {
        n++;
    }
    printf("The lenght of string is %d",n);

    return 0;
}