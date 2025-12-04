//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,flag=0;
    printf("Enter Any string:");
    scanf("%s",a);
    
    i=0;
    j=strlen(a)-1;
    while (i<j)
    {
        if (a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    
    if (flag==0)
        {
            printf("%s is palindrome word",a);
        }
    else
    {
        printf("%s is not a palindrome",a);
    }
    
return 0;
}